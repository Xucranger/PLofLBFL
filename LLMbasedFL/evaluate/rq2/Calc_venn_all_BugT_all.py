import matplotlib.pyplot as plt
from matplotlib_venn import venn2
from matplotlib_venn import venn3,venn3_circles
import matplotlib.patches as mpatches
import seaborn as sns
import os
import pickle
import matplotlib.pyplot as plt
from matplotlib import rcParams
import pandas as pd

# def analyze_Codeflaws(experiment_index,rangeIndex,model_name):
#     root_path = "/root/autodl-tmp/data/codeflaws/version/"
#     top1=top3=top5=top10=topNull=0
#     err_list =[]
#
#     top1_list=[]
#     top5_list=[]
#     top10_list=[]
#
#
#     for versionInt in range(1, rangeIndex):
#         versionStr = "v"+ str(versionInt);
#         print("processing: "+versionStr)
#         #数据目录
#         # 输出的目录
#         ans_path = os.path.join(root_path,versionStr,"test_data",model_name)
#         ans_path = os.path.join(ans_path,str(experiment_index))
#         top_N_path = os.path.join(ans_path,"topN.txt")
#
#         topN_str = 100
#         try:
#             with open(top_N_path, 'r') as file:
#                 topN_str = file.read()
#         except:
#             print("读取topN失败:", top_N_path)
#
#             # err_list.append(versionInt)
#
#         topN_Index = int(topN_str)
#         # 处理topn数据，并统计每一个程序是top几
#         if topN_Index<=1:
#             top1+=1
#             top1_list.append(1)
#         if topN_Index<=3:
#             top3+=1
#         if topN_Index<=5:
#             top5+=1
#             top5_list.append(1)
#         if topN_Index<=10:
#             top10+=1
#             top10_list.append(1)
#         else:
#             topNull+=1
#             top1_list.append(0)
#             top5_list.append(0)
#             top10_list.append(0)
#
#     ans = [top1_list,top5_list,top10_list]
#     return ans
def analyze_Codeflaws(prompt,experiment_index,experiment_model,rangeIndex,root_path):
    top1 = top3 = top5 = top10 = topNull = 0
    istop1=istop5=istop10=0
    err_list = []

    top1_list = set()
    top5_list = set()
    top10_list = set()
    # root_path = "D:/私人资料/论文/大模型相关/大模型错误定位实证研究/data/codeflaws/version"
    Codeflaws_Filter_Data = []
    with open("/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/Codeflaws_Filter_Data.pkl", "rb") as f:
        Codeflaws_Filter_Data = pickle.load(f)

    process_num = 0

    for versionInt in range(1, 1544):
        istop1 = istop5 = istop10 = 0

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

        print("processing: " + versionStr)
        # 数据目录
        # 输出的目录
        ans_path = os.path.join(root_path, versionStr, "test_data", experiment_model)
        ans_path = os.path.join(ans_path, str(experiment_index))
        top_N_path = os.path.join(ans_path, "topN.txt")

        topN_str = 100
        try:
            with open(top_N_path, 'r') as file:
                topN_str = file.read()
        except:
            print("读取topN失败:", top_N_path)

            # err_list.append(versionInt)

        topN_Index = int(topN_str)
        # 处理topn数据，并统计每一个程序是top几
        if topN_Index <= 1:
            top1 += 1
            # istop1=1
            top1_list.add(versionStr)
        if topN_Index <= 3:
            top3 += 1
        if topN_Index <= 5:
            top5 += 1
            # istop5=1
            top5_list.add(versionStr)
        if topN_Index <= 10:
            top10 += 1
            # istop10=1
            top10_list.add(versionStr)
        else:
            topNull += 1

        # top1_list.append(istop1)
        # top5_list.append(istop5)
        # top10_list.append(istop10)

        # 数据目录
        # 给代码增加行号
        # AddLineNumber.process_code(os.path.join(root_path, versionStr, "test_data/defect_root/source"), "tcas.c")
        # 增加行号的code_location
        # code_location = os.path.join(root_path, versionStr, "test_data/defect_root/source/tcas.c_indexed.txt")
        # faulte_data_path = os.path.join(root_path, versionStr, "test_data/defect_root/Fault_Record.txt")
        # faulte_data_index = get_fault_data(faulte_data_path)
        #
        # # 输出的目录
        # ans_path = os.path.join(root_path, versionStr, "test_data", experiment_model)
        # ans_path = os.path.join(ans_path, str(experiment_index))
        # test_outfile = os.path.join(ans_path, "test_outfile.txt")

        # 使用os.path.exists检查文件夹是否存在
        # if not os.path.exists(ans_path):
        #     # 如果文件夹不存在，则创建它
        #     os.makedirs(ans_path)
        #     print(f"文件夹 '{ans_path}' 已创建")
        #
        # isok = send_single_code_faultlocalization(prompt, ans_path, code_location, faulte_data_index, experiment_model)
    ans = [top1_list, top5_list, top10_list]
    return ans


def analyze_Condefects(experiment_index, model_name, rangeIndex,root_path):
    # root_path = "/root/autodl-tmp/data/ConDefects-main/Code/"
    top1 = top3 = top5 = top10 = topNull = 0
    # Condefects_Filter_Data = []
    top1_list = set()
    top5_list = set()
    top10_list = set()

    try:
        with open("/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/Condefects_Filter_Data.pkl", 'rb') as file:
            Condefects_Filter_Data = pickle.load(file)
    except:
        print("Condefects_Filter_Data读取失败")
        jump_flag = False

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
            # print(f'子文件夹: {contest_path}')
            try:
                java_path = os.path.join(question_path, "Java")
                questions = os.listdir(java_path)
                answers = os.listdir(java_path)
            except:
                print("列出JavaPath " + java_path + " 失败")
                continue
            for answer in answers:
                if answer not in Condefects_Filter_Data:
                    continue
                process_num += 1
                if process_num > rangeIndex:
                    print("达到上线: " + str(rangeIndex))
                    break

                # 数据目录
                # 输出的目录
                code_location = os.path.join(java_path, answer, "correctVersion.java")
                faulte_data_path = os.path.join(java_path, answer, "faultLocation.txt")
                ans_path = os.path.join(java_path, answer, model_name, str(experiment_index))
                top_N_path = os.path.join(ans_path, "topN.txt")

                topN_str = 100
                try:
                    with open(top_N_path, 'r') as file:
                        topN_str = file.read()
                except:
                    print("读取topN失败:", top_N_path)
                    # Condefects_Filter_Data = remove_element(Condefects_Filter_Data,answer)
                    # err_list.append(versionInt)
                    # continue

                topN_Index = int(topN_str)
                if topN_Index <= 1:
                    top1 += 1
                    top1_list.add(answer)
                if topN_Index <= 3:
                    top3 += 1
                if topN_Index <= 5:
                    top5 += 1
                    top5_list.add(answer)
                if topN_Index <= 10:
                    top10 += 1
                    top10_list.add(answer)
                else:
                    topNull += 1

    # print("top1: ", top1)
    # print("top3: ", top3)
    # print("top5: ", top5)
    # print("top10: ", top10)
    # print("topNull: ", topNull)
    # total_Num = top10 + topNull
    #
    # nums = [top1, top3, top5, top10, topNull]
    # return nums

    ans = [top1_list, top5_list, top10_list]
    return ans

def analyze_BugT(experiment_index, model_name, rangeIndex,root_path):
    # root_path = "/root/autodl-tmp/data/ConDefects-main/Code/"
    top1 = top3 = top5 = top10 = topNull = 0
    # Condefects_Filter_Data = []
    top1_list = set()
    top5_list = set()
    top10_list = set()

    # try:
    #     with open("/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/Condefects_Filter_Data.pkl", 'rb') as file:
    #         Condefects_Filter_Data = pickle.load(file)
    # except:
    #     print("Condefects_Filter_Data读取失败")
    #     jump_flag = False

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
            # print(f'子文件夹: {contest_path}')
            try:
                cpp_path = os.path.join(question_path, "C++")
                questions = os.listdir(cpp_path)
                answers = os.listdir(cpp_path)
            except:
                print("列出cpp_path " + cpp_path + " 失败")
                continue
            for answer in answers:
                # if answer not in Condefects_Filter_Data:
                #     continue
                process_num += 1
                if process_num > rangeIndex:
                    print("达到上线: " + str(rangeIndex))
                    break

                # 数据目录
                # 输出的目录
                code_location = os.path.join(cpp_path, answer, "correctVersion.cpp")
                faulte_data_path = os.path.join(cpp_path, answer, "faultLocation.txt")
                ans_path = os.path.join(cpp_path, answer, model_name, str(experiment_index))
                top_N_path = os.path.join(ans_path, "topN.txt")

                topN_str = 100
                try:
                    with open(top_N_path, 'r') as file:
                        topN_str = file.read()
                except:
                    print("读取topN失败:", top_N_path)
                    # Condefects_Filter_Data = remove_element(Condefects_Filter_Data,answer)
                    # err_list.append(versionInt)
                    # continue

                topN_Index = int(topN_str)
                if topN_Index <= 1:
                    top1 += 1
                    top1_list.add(answer)
                if topN_Index <= 3:
                    top3 += 1
                if topN_Index <= 5:
                    top5 += 1
                    top5_list.add(answer)
                if topN_Index <= 10:
                    top10 += 1
                    top10_list.add(answer)
                else:
                    topNull += 1

    # print("top1: ", top1)
    # print("top3: ", top3)
    # print("top5: ", top5)
    # print("top10: ", top10)
    # print("topNull: ", topNull)
    # total_Num = top10 + topNull
    #
    # nums = [top1, top3, top5, top10, topNull]
    # return nums

    ans = [top1_list, top5_list, top10_list]
    return ans


def analyze_sbfl_mbfll(formula, method, root_path,dataset):
    # root_path = "D:/私人资料/论文/大模型相关/大模型错误定位实证研究/data/codeflaws/results"
    top1_list = set()
    top5_list = set()
    top10_list = set()
    with open("/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/"+dataset+"_Filter_Data.pkl", "rb") as f:
        Filter_Data = pickle.load(f)
    data_path = os.path.join(root_path,formula+method+".txt")
    if not os.path.exists(data_path):
        raise PathNotExistError(f"The path '{data_path}' does not exist. Program terminated.")
    data = []
    with open(data_path, 'r') as file:
        for line in file:
            row = [int(x) for x in line.split()]
            data.append(row)
    top1=top3=top5=top10=topNull=0
    for version in range(0, 503):
        row_data = data[version]
        topN_Index=100
        for n in range(0,10):
            if row_data[n]>0:
                topN_Index=n+1
                break;
        if topN_Index <= 1:
            top1 += 1
            # istop1=1
            top1_list.add(Filter_Data[version])
        if topN_Index <= 3:
            top3 += 1
        if topN_Index <= 5:
            top5 += 1
            # istop5=1
            top5_list.add(Filter_Data[version])
        if topN_Index <= 10:
            top10 += 1
            # istop10=1
            top10_list.add(Filter_Data[version])
        else:
            topNull += 1

    # nums = [top1, top3, top5, top10]
    # return nums
    ans = [top1_list, top5_list, top10_list]
    return ans

class PathNotExistError(Exception):
    pass

def set_venn_color(venn, base_colors):
    if venn.get_patch_by_id('100'):
        venn.get_patch_by_id('100').set_color(base_colors[0])
        venn.get_patch_by_id('100').set_alpha(1)
    if venn.get_patch_by_id('010'):
        venn.get_patch_by_id('010').set_color(base_colors[1])
        venn.get_patch_by_id('010').set_alpha(1)
    if venn.get_patch_by_id('001'):
        venn.get_patch_by_id('001').set_color(base_colors[2])
        venn.get_patch_by_id('001').set_alpha(1)
    if venn.get_patch_by_id('110'):
        venn.get_patch_by_id('110').set_color(base_colors[3])
        venn.get_patch_by_id('110').set_alpha(1)
    if venn.get_patch_by_id('011'):
        venn.get_patch_by_id('011').set_color(base_colors[4])
        venn.get_patch_by_id('011').set_alpha(1)
    if venn.get_patch_by_id('101'):
        venn.get_patch_by_id('101').set_color(base_colors[5])
        venn.get_patch_by_id('101').set_alpha(1)
    if venn.get_patch_by_id('111'):
        venn.get_patch_by_id('111').set_color(base_colors[6])
        venn.get_patch_by_id('111').set_alpha(1)







    # for text in venn.set_labels:
    #     text.set_color('white')
    #
    # # 设置交集数字的字体颜色
    # for text in venn.subset_labels:
    #     if text:  # 检查标签是否存在
    #         text.set_color('white')
    return

if __name__ == "__main__":
    # model_name="chatGlm4"
    # gpt-4
    # experiment_model = "gpt-3.5-turbo"
    config = {
        "font.family": 'Times New Roman',
        "mathtext.fontset": 'stix',
        "font.serif": ['SimSun'],
    }
    rcParams.update(config)
    top_number = [1, 5]
    index = 0

    # 画codeflaws上的
    # title = "o1-preview DeepSeekV3 and other technique in TOP-"+str(top_number[index])+" of Codeflaws"
    # root_path = "/home/xuhexiang/data/codeflaws/version"
    # ans_o1preview = analyze_Codeflaws("prompt", 1, "gpt-4", 503,root_path)
    # ans_deepseekV3 = analyze_Codeflaws("prompt", 1, "gpt-3.5-turbo", 503,root_path)
    # ans_chatGlm4 = analyze_Codeflaws("prompt", 1, "chatGlm4", 503,root_path)
    # root_path = "/home/xuhexiang/data_openLLM/codeflaws/version"
    # ans_llama = analyze_Codeflaws("prompt", 1, "openbuddy-llama", 503, root_path)
    # ans_codellama = analyze_Codeflaws("prompt", 1, "code-llama", 503, root_path)

    # root_path = "/home/xuhexiang/data/codeflaws/results"
    # ans_dstarMBFL = analyze_sbfl_mbfll("dstar", "MBFL", root_path, "Codeflaws")
    # ans_ochiMBFL = analyze_sbfl_mbfll("ochi", "MBFL", root_path, "Codeflaws")
    # ans_op2MBFL = analyze_sbfl_mbfll("op", "MBFL", root_path, "Codeflaws")
    # ans_dstarSBFL = analyze_sbfl_mbfll("dstar", "SBFL", root_path, "Codeflaws")
    # ans_ochiSBFL = analyze_sbfl_mbfll("ochi", "SBFL", root_path, "Codeflaws")
    # ans_op2SBFL = analyze_sbfl_mbfll("op", "SBFL", root_path, "Codeflaws")

    root_path = "/home/xuhexiang/data/BugT/Code"
    ans_o1preview = analyze_BugT( 6, "o1-preview", 503, root_path)
    ans_mini = analyze_BugT( 6, "o1-mini", 503, root_path)
    ans_gpt4 = analyze_BugT( 6, "gpt-4", 503, root_path)
    ans_gpt4o = analyze_BugT( 6, "gpt-4o", 503, root_path)
    ans_gpt3_5 = analyze_BugT( 6, "gpt-3.5-turbo", 503, root_path)
    ans_chatGlm3 = analyze_BugT( 1, "chatGlm3", 503, root_path)
    ans_chatGlm4 = analyze_BugT( 1, "chatGlm4", 503, root_path)
    ans_deepseekV3 = analyze_BugT( 6, "deepseekV3", 503, root_path)
    ans_llama2 = analyze_BugT( 1, "llama2", 503, root_path)
    ans_llama3 = analyze_BugT( 1, "llama3", 503, root_path)
    # root_path = "D:/私人资料/论文/大模型相关/大模型错误定位实证研究/data_2024_0313/ConDefects-main/Code"
    # ans_llama = analyze_Condefects( 1, "openbuddy-llama", 503, root_path)
    ans_codellama = analyze_BugT( 1, "codellama", 503, root_path)

    # # 画BugT上的
    # # title = "GPT-4 and SBFL and MBFL in Condefects"
    # root_path = "D:/私人资料/论文/大模型相关/大模型错误定位实证研究/data/ConDefects-main/Code"
    # ans_o1preview = analyze_Condefects( 1, "gpt-4", 503, root_path)
    root_path = "/home/xuhexiang/data/BugT/results"
    ans_dstarMBFL = analyze_sbfl_mbfll("dstar", "MBFL", root_path,"BugT")
    ans_ochiMBFL = analyze_sbfl_mbfll("ochi", "MBFL", root_path, "BugT")
    ans_op2MBFL = analyze_sbfl_mbfll("op", "MBFL", root_path, "BugT")
    ans_dstarSBFL = analyze_sbfl_mbfll("dstar", "SBFL", root_path, "BugT")
    ans_ochiSBFL = analyze_sbfl_mbfll("ochi", "SBFL", root_path, "BugT")
    ans_op2SBFL = analyze_sbfl_mbfll("op", "SBFL", root_path, "BugT")

    border_color = "white"

    my_colors = [
    (220/255, 225/255, 230/255),  # 浅灰色，最浅
    (242/255, 232/255, 227/255),  # 浅橙色
    (196/255, 216/255, 242/255),  # 浅蓝色
    (180/255, 170/255, 220/255),  # 柔和紫色
    (170/255, 160/255, 200/255),  # 更浅的深紫色
    (140/255, 150/255, 190/255),  # 更浅的深蓝色
    (130/255, 140/255, 180/255)   # 更浅的深灰蓝色
    ]
    # 创建一个3x5的子图布局和一个总标题
    # 创建一个3x5的子图布局和一个总标题
    fig, axs = plt.subplots(3, 5, figsize=(21, 9))  # 调整高度为12，减少底部空白
    # plt.suptitle(title, fontsize=30)
    plt.rcParams.update({'font.size': 20})  # 调整字体大小
    plt.rcParams.update({'axes.titlesize': 25})  # 设置子图标题的字体大小
    
    alpha_value = 1
    line_width = 2
    for ax in axs.flatten():
        ax.set_aspect('auto')  # 设置自动的纵横比
        ax.set_title(ax.get_title(), fontsize=20, rotation=0, ha='center')  # 保证标题水平并设置字体大小

    # 第一列
    venn1=venn3([ans_o1preview[index], ans_deepseekV3[index], ans_mini[index]], ('', '', ''),
          ax=axs[0, 0])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_mini[index]], linestyle='solid', linewidth=line_width, color=border_color
                            ,ax=axs[0, 0])
    axs[0, 0].set_title("o1-mini")

    venn2=venn3([ans_o1preview[index], ans_deepseekV3[index], ans_gpt4o[index]], ('', '', ''),
          ax=axs[1, 0])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_gpt4o[index]], linestyle='solid', linewidth=line_width, color=border_color
                            ,ax=axs[1, 0])
    axs[1, 0].set_title("GPT-4o")

    venn4=venn3([ans_o1preview[index], ans_deepseekV3[index], ans_gpt4[index]], ('', '', ''),
          ax=axs[2, 0])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_gpt4[index]], linestyle='solid', linewidth=line_width, color=border_color
                            ,ax=axs[2, 0])
    axs[2, 0].set_title("GPT-4")

    # 第二列
    venn5=venn3([ans_o1preview[index], ans_deepseekV3[index], ans_gpt3_5[index]], ('', '', ''),
          ax=axs[0, 1])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_gpt3_5[index]], linestyle='solid', linewidth=line_width, color=border_color
                            ,ax=axs[0, 1])
    axs[0, 1].set_title("GPT-3.5-Turbo")

    venn6=venn3([ans_o1preview[index], ans_deepseekV3[index], ans_chatGlm4[index]], ('', '', ''),
          ax=axs[1, 1])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_chatGlm4[index]], linestyle='solid', linewidth=line_width, color=border_color
                            ,ax=axs[1, 1])
    axs[1, 1].set_title("ChatGLM4")

    venn7=venn3([ans_o1preview[index], ans_deepseekV3[index], ans_chatGlm3[index]], ('', '', ''),
          ax=axs[2, 1])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_chatGlm3[index]], linestyle='solid', linewidth=line_width, color=border_color
                            ,ax=axs[2, 1])
    axs[2, 1].set_title("ChatGLM3")

    # 第三列
    venn8=venn3([ans_o1preview[index], ans_deepseekV3[index], ans_llama3[index]], ('', '', ''),
          ax=axs[0, 2])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_llama3[index]], linestyle='solid', linewidth=line_width, color=border_color
                            ,ax=axs[0, 2])
    axs[0, 2].set_title("Llama3")

    venn9=venn3([ans_o1preview[index], ans_deepseekV3[index], ans_llama2[index]], ('', '', ''),
          ax=axs[1, 2])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_llama2[index]], linestyle='solid', linewidth=line_width, color=border_color
                            ,ax=axs[1, 2])
    axs[1, 2].set_title("Llama2")

    venn10=venn3([ans_o1preview[index], ans_deepseekV3[index], ans_codellama[index]], ('', '', ''),
          ax=axs[2, 2])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_codellama[index]], linestyle='solid', linewidth=line_width, color=border_color
                            ,ax=axs[2, 2])
    axs[2, 2].set_title("Code Llama")

    # 第四列
    venn11 = venn3([ans_o1preview[index], ans_deepseekV3[index], ans_ochiMBFL[index]], ('', '', ''),
          ax=axs[0, 3])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_ochiMBFL[index]],
                            linestyle='solid', linewidth=line_width, color=border_color
                            , ax=axs[0, 3])
    axs[0, 3].set_title("MBFL$_{Ochiai}$")
    venn12 = venn3([ans_o1preview[index], ans_deepseekV3[index], ans_dstarMBFL[index]], ('', '', ''),
          ax=axs[1, 3])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_dstarMBFL[index]],
                            linestyle='solid', linewidth=line_width, color=border_color
                            , ax=axs[1, 3])
    axs[1, 3].set_title("MBFL$_{Dstar}$")
    venn13 = venn3([ans_o1preview[index], ans_deepseekV3[index], ans_op2MBFL[index]], ('', '', ''),
          ax=axs[2, 3])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_op2MBFL[index]],
                            linestyle='solid', linewidth=line_width, color=border_color
                            , ax=axs[2, 3])
    axs[2, 3].set_title("MBFL$_{Op2}$")


    # 第五列
    venn14 = venn3([ans_o1preview[index], ans_deepseekV3[index], ans_ochiSBFL[index]], ('', '', ''),
          ax=axs[0, 4])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_ochiSBFL[index]],
                            linestyle='solid', linewidth=line_width, color=border_color
                            , ax=axs[0, 4])
    axs[0, 4].set_title("SBFL$_{Ochiai}$")
    venn15 = venn3([ans_o1preview[index], ans_deepseekV3[index], ans_dstarSBFL[index]], ('', '', ''),
          ax=axs[1, 4])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_dstarSBFL[index]],
                            linestyle='solid', linewidth=line_width, color=border_color
                            , ax=axs[1, 4])
    axs[1, 4].set_title("SBFL$_{Dstar}$")
    venn16 = venn3([ans_o1preview[index], ans_deepseekV3[index], ans_op2SBFL[index]], ('', '', ''),
          ax=axs[2,4])
    circles = venn3_circles([ans_o1preview[index], ans_deepseekV3[index], ans_op2SBFL[index]],
                            linestyle='solid', linewidth=line_width, color=border_color
                            , ax=axs[2, 4])
    axs[2, 4].set_title("SBFL$_{Op2}$")

    set_venn_color(venn1, my_colors)
    set_venn_color(venn2, my_colors)
    set_venn_color(venn4, my_colors)
    set_venn_color(venn5, my_colors)
    set_venn_color(venn6, my_colors)
    set_venn_color(venn7, my_colors)
    set_venn_color(venn8, my_colors)
    set_venn_color(venn9, my_colors)
    set_venn_color(venn10, my_colors)
    set_venn_color(venn11, my_colors)
    set_venn_color(venn12, my_colors)
    set_venn_color(venn13, my_colors)
    set_venn_color(venn14, my_colors)
    set_venn_color(venn15, my_colors)
    set_venn_color(venn16, my_colors)


     # 添加图例
    legend_colors = [my_colors[0], my_colors[1], my_colors[2]]
    labels = ['o1-preview', 'DeepSeekV3', 'Method of Each Title']
    patches = [mpatches.Patch(color=color, label=label) for color, label in zip(legend_colors, labels)]
    # fig.legend(handles=patches, loc='upper center', ncol=len(patches), bbox_to_anchor=(0.5, 1.05))

    # 调整子图间的间隔
    # plt.subplots_adjust(top=0.25)
    plt.subplots_adjust(hspace=0.03, wspace=0.1)  # 减少纵向间距，增加横向间距
    plt.tight_layout(pad=1.0)  # 调整子图间的空隙
    # plt.tight_layout()  # 进一步调整子图布局
    # 保存图像
    plt.savefig('/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq2/BugT_overlap_all.pdf')
