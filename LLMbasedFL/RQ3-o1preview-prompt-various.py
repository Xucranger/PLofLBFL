import os.path
import pickle
import re
import requests
import json
from openai import OpenAI

import AddLineNumber
import ReadJsonTest
import SendPromt
import getTokenNumbers

# Defects4J 程序列表，就通过这个列表来遍历所有的程序
projectOrigin = {
    "Chart": 26,
    # "Lang": 65,
    # "Math": 106,
    # "Mockito": 38,
    # "Time": 27,
    # "Closure": 176,
    # "Cli": 39,
    # "Codec": 18,
    # "Collections": 4,
    # "Compress": 47,
    # "Csv": 16,
    # "Gson": 18,
    # "JacksonCore": 26,
    # "JacksonDatabind": 112,
    # "JacksonXml": 6,
    # "Jsoup": 93,
    # "JxPath": 22,
}

def send_single_code_faultlocalization(prompt, ans_path,code_location,faultdata,experiment_model):
    response_txt_location = os.path.join(ans_path, "response.txt")
    response_topN_location = os.path.join(ans_path, "topN.txt")
    res_json_location = os.path.join(ans_path, "response.pkl")
    prompt_location = os.path.join(ans_path, "prompt.txt")
    print(response_topN_location)
    if os.path.exists(response_topN_location):
        print("这个topN已经计算过了，跳过他")
        return True
    with open(code_location, 'r', encoding='utf-8') as file:
        # 读取文件内容并保存到字符串中
        code = file.read()

    prompt_code=prompt+"\n\n"+code;
    # with open("response.txt", 'w') as file:
    #     file.write(prompt_code)
    tokens = getTokenNumbers.get_openai_token_len(prompt_code, model="text-davinci-001")
    if tokens > 2048:
        print("超出token限制跳过,"+code_location)
        return False

    repeat_time = 10;

    repeat_time_this = repeat_time;
    while repeat_time_this>0:
        repeat_time_this-=1

        # print(" 第 " + str(repeat_time - repeat_time_this) + " 次请求。" + code_location)
        # # response_txt = send_request_and_return(prompt_code)
        # response_txt = SendPromt.send_prompt_openai_gpt(prompt_code,experiment_model)
 
        try:
            # 发送请求在这
            print(" 第 " + str(repeat_time - repeat_time_this) + " 次请求。" + code_location)
            # response_txt = send_request_and_return(prompt_code)
            response_txt = SendPromt.send_prompt_openai_gpt(prompt_code,experiment_model)
        except:
            print(" 请求发送异常"+code_location)
            continue

        try:
            res_json_data = ReadJsonTest.extract_json_regular(response_txt)
        except:
            print(" Json读取异常"+code_location)
            continue

        if res_json_data is None:
            print(code_location + " json读取到空")
            continue
            # if repeat_time_this == 1:
            #     print("请求次数达到最大，跳过")
            # return False
        else:
            if not os.path.exists(ans_path):
                # 如果文件夹不存在，则创建它
                os.makedirs(ans_path)
                print(f"文件夹 '{ans_path}' 已创建")

            # 读取json信息

            # 判断是否替换
            ReplaceIndex = True


            topN = 100
            faultlist = res_json_data['faultLocalization']
            for index in range(len(faultlist)):
                # print(faultlist[index]['lineNumber'])
                try:
                    if faultlist[index]['lineNumber']==faultdata:
                        topN=index+1
                        break
                except:
                    print("读取lineNumber失败")
            print("topN: ",topN)
            # for index in range(len(faultlist)):
            #     # print(faultlist[index]['lineNumber'])
            #     lineNumber=-1
            #     try:
            #         lineNumber = int(faultlist[index]['lineNumber'])
            #     except:
            #         print("lineNumber转换失败: ")
            #         print(faultlist)
            #     if not lineNumber<0:
            #         continue
            #     if lineNumber==faultdata:
            #         topN=index+1
            #         break
            # print("topN: ",topN)

            if ReplaceIndex == True:
                with open(response_txt_location, 'w') as file:
                    file.write(response_txt)
                with open(res_json_location, 'wb') as file:
                    pickle.dump(res_json_data, file)
                with open(response_topN_location, 'w') as file:
                        file.write(str(topN))
                with open(prompt_location, 'w') as file:
                        file.write(prompt_code)

                # 跳出循环
            print("数据存储成功 "+code_location)
            return True
            break
    return False


# CodeFlaws_读取并返回错误信息行号。
def get_fault_data(faulte_data_path):
    with open(faulte_data_path, 'r', encoding='utf-8') as file:
        # 读取文件内容并保存到字符串中
        faulte_data_str = file.read()
    faulte_data_index = re.search('\d+', faulte_data_str).group(0)
    faulte_data_index = int(faulte_data_index)
    return faulte_data_index

def run_BugT(prompt,experiment_index,experiment_model,rangeIndex):
    root_path = "/home/xuhexiang/data/BugT/Code"

    # with open('/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/Condefects_Filter_Data.pkl', 'rb') as file:
    #         Condefects_Filter_Data = pickle.load(file)

    process_num = 0
    # 遍历文件夹中的所有内容
    questions = os.listdir(root_path)
    for question in questions:
        if process_num > rangeIndex:
            print("达到上线: " + str(rangeIndex))
            break
        question_path = os.path.join(root_path, question)

        # 检查是否为文件夹
        if os.path.isdir(question_path):
            try:
                cpp_path = os.path.join(question_path,"C++")
                questions = os.listdir(cpp_path)
                answers = os.listdir(cpp_path)
            except:
                print("列出CppPath "+cpp_path+" 失败")
                continue
            for answer in answers:
                # if answer not in Condefects_Filter_Data:
                #     continue
                process_num+=1
                if process_num > rangeIndex:
                    print("达到上线: "+str(rangeIndex))
                    break
                print("正在跑BugT上的 "+experiment_model+" 实验： "+str(experiment_index)+" 的第 "+str(process_num)+" 个程序")

                #给代码增加行号
                AddLineNumber.process_code(os.path.join(cpp_path, answer), "faultyVersion.cpp")
                # code_location = os.path.join(root_path,versionStr,"test_data/defect_root/source/tcas.c")
                # 增加行号的code_location
                # code_location = os.path.join(root_path, versionStr, "test_data/defect_root/source/tcas.c_indexed.txt")
                code_location = os.path.join(cpp_path, answer, "faultyVersion.cpp_indexed.txt")
                faulte_data_path = os.path.join(cpp_path, answer, "faultLocation.txt")
                ans_path = os.path.join(cpp_path, answer, experiment_model,str(experiment_index))
                faulte_data_index = get_fault_data(faulte_data_path)

                send_single_code_faultlocalization(prompt, ans_path, code_location, faulte_data_index, experiment_model)
     


def run_Condefects(prompt,experiment_index,experiment_model,rangeIndex):
    root_path = "/home/xuhexiang/data/ConDefects-main/Code/"

    with open('/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/Condefects_Filter_Data.pkl', 'rb') as file:
            Condefects_Filter_Data = pickle.load(file)

    process_num = 0
    # 遍历文件夹中的所有内容
    questions = os.listdir(root_path)
    for question in questions:
        if process_num > rangeIndex:
            print("达到上线: " + str(rangeIndex))
            break
        question_path = os.path.join(root_path, question)

        # 检查是否为文件夹
        if os.path.isdir(question_path):
            try:
                java_path = os.path.join(question_path,"Java")
                questions = os.listdir(java_path)
                answers = os.listdir(java_path)
            except:
                print("列出JavaPath "+java_path+" 失败")
                continue
            for answer in answers:
                if answer not in Condefects_Filter_Data:
                    continue
                process_num+=1
                if process_num > rangeIndex:
                    print("达到上线: "+str(rangeIndex))
                    break
                print("正在跑Condefects上的 "+experiment_model+" 实验： "+str(experiment_index)+" 的第 "+str(process_num)+" 个程序")

                #给代码增加行号
                AddLineNumber.process_code(os.path.join(java_path, answer), "faultyVersion.java")
                # code_location = os.path.join(root_path,versionStr,"test_data/defect_root/source/tcas.c")
                # 增加行号的code_location
                # code_location = os.path.join(root_path, versionStr, "test_data/defect_root/source/tcas.c_indexed.txt")
                code_location = os.path.join(java_path, answer, "faultyVersion.java_indexed.txt")
                faulte_data_path = os.path.join(java_path, answer, "faultLocation.txt")
                ans_path = os.path.join(java_path, answer, experiment_model,str(experiment_index))
                faulte_data_index = get_fault_data(faulte_data_path)

                isok = send_single_code_faultlocalization(prompt, ans_path, code_location, faulte_data_index, experiment_model)
                i=0



def run_Codeflaws(prompt,experiment_index,experiment_model,rangeIndex):
    root_path = "/home/xuhexiang/data/codeflaws/version/"
    Codeflaws_Filter_Data = []
    with open("/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/Codeflaws_Filter_Data.pkl", "rb") as f:
        Codeflaws_Filter_Data = pickle.load(f)

    process_num = 0

    for versionInt in range(1, 1544):
        # if versionInt in errlist:
        #     print("跳过:",versionInt)
        #     continue
        versionStr = "v" + str(versionInt);
        if versionStr not in Codeflaws_Filter_Data:
            print("跳过:"+versionStr)
            continue

        #在遍历达到一定个数后退出
        process_num +=1

        # print("processing: " + versionStr+" 第"+process_num+"个")
        if process_num>rangeIndex:
            break

        print("正在跑Codeflaws上的 " + experiment_model + " 实验： " + str(experiment_index) + " 的第 " + str(
            process_num) + " 个程序")

        # 数据目录
        # 给代码增加行号
        AddLineNumber.process_code(os.path.join(root_path, versionStr, "test_data/defect_root/source"), "tcas.c")
        # code_location = os.path.join(root_path,versionStr,"test_data/defect_root/source/tcas.c")
        # 增加行号的code_location
        code_location = os.path.join(root_path, versionStr, "test_data/defect_root/source/tcas.c_indexed.txt")
        faulte_data_path = os.path.join(root_path, versionStr, "test_data/defect_root/Fault_Record.txt")
        faulte_data_index = get_fault_data(faulte_data_path)

        # 输出的目录
        ans_path = os.path.join(root_path, versionStr, "test_data", experiment_model)
        ans_path = os.path.join(ans_path, str(experiment_index))
        test_outfile = os.path.join(ans_path, "test_outfile.txt")

        # 使用os.path.exists检查文件夹是否存在
        if not os.path.exists(ans_path):
            # 如果文件夹不存在，则创建它
            os.makedirs(ans_path)
            print(f"文件夹 '{ans_path}' 已创建")

        isok = send_single_code_faultlocalization(prompt, ans_path, code_location, faulte_data_index, experiment_model)



# Automatically call send_request_and_save_to_file() when the script is executed
if __name__ == "__main__":
    experiment_model = "o1-preview"
    base_location = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/prompts"

    prompt_location = os.path.join(base_location,"prompt1-all.txt")
    with open(prompt_location, 'r', encoding='utf-8') as file:
        # 读取文件内容并保存到字符串中
        prompt = file.read()
    run_Codeflaws(prompt, "prompt1-all-o1preview", experiment_model, 50)
    run_Condefects(prompt, "prompt1-all-o1preview", experiment_model, 50)
    run_BugT(prompt, "prompt1-all-o1preview", experiment_model, 50)

    prompt_location = os.path.join(base_location, "prompt1-noChain.txt")
    with open(prompt_location, 'r', encoding='utf-8') as file:
        # 读取文件内容并保存到字符串中
        prompt = file.read()
    run_Codeflaws(prompt, "prompt1-noChain-o1preview", experiment_model, 50)
    run_Condefects(prompt, "prompt1-noChain-o1preview", experiment_model, 50)
    run_BugT(prompt, "prompt1-noChain-o1preview", experiment_model, 50)

    prompt_location = os.path.join(base_location, "prompt1-noIntent.txt")
    with open(prompt_location, 'r', encoding='utf-8') as file:
        # 读取文件内容并保存到字符串中
        prompt = file.read()
    run_Codeflaws(prompt, "prompt1-noIntent-o1preview", experiment_model, 50)
    run_Condefects(prompt, "prompt1-noIntent-o1preview", experiment_model, 50)
    run_BugT(prompt, "prompt1-noIntent-o1preview", experiment_model, 50)

    prompt_location = os.path.join(base_location, "prompt1-noNoviceDescription.txt")
    with open(prompt_location, 'r', encoding='utf-8') as file:
        # 读取文件内容并保存到字符串中
        prompt = file.read()
    run_Codeflaws(prompt, "prompt1-noNoviceDescription-o1preview", experiment_model, 50)
    run_Condefects(prompt, "prompt1-noNoviceDescription-o1preview", experiment_model, 50)
    run_BugT(prompt, "prompt1-noNoviceDescription-o1preview", experiment_model, 50)

    prompt_location = os.path.join(base_location, "prompt1-noReason.txt")
    with open(prompt_location, 'r', encoding='utf-8') as file:
        # 读取文件内容并保存到字符串中
        prompt = file.read()
    run_Codeflaws(prompt, "prompt1-noReason-o1preview", experiment_model, 50)
    run_Condefects(prompt, "prompt1-noReason-o1preview", experiment_model, 50)
    run_BugT(prompt, "prompt1-noReason-o1preview", experiment_model, 50)

    prompt_location = os.path.join(base_location, "prompt1-noSort.txt")
    with open(prompt_location, 'r', encoding='utf-8') as file:
        # 读取文件内容并保存到字符串中
        prompt = file.read()
    run_Codeflaws(prompt, "prompt1-noSort-o1preview", experiment_model, 50)
    run_Condefects(prompt, "prompt1-noSort-o1preview", experiment_model, 50)
    run_BugT(prompt, "prompt1-noSort-o1preview", experiment_model, 50)


