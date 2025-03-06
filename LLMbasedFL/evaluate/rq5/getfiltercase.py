
import seaborn as sns
import os
import json
import pickle
import csv
import matplotlib.pyplot as plt
import pandas as pd
import re
import matplotlib.pyplot as plt
import numpy as np

def generateJson(code_location,faultcode_location,faulte_data_path,reason_path,ID):
    correctVersion=""
    faultyVersion=""
    faultLocation=0
    Reason=""
    Reasonability = -1
    Readability = -1
    Practicality = -1
    try:
        with open(code_location, 'r') as file:
            correctVersion = file.read()
    except:
        print("读取正确代码失败:", code_location)

    try:
        with open(faultcode_location, 'r') as file:
            faultyVersion = file.read()
    except:
        print("读取错误代码失败:", faultcode_location)
    try:
        with open(faulte_data_path, 'r') as file:
            faultLocation = file.read()
    except:
        print("读取错误位置失败:", faulte_data_path)
    # try:
    with open(reason_path, 'r') as file:
        content = file.read()
        # lines = file.readlines()
        # lines = lines[1:-1]
        # modified_content = ''.join(lines)
        # 使用正则表达式去除 "```json```" 或其他不必要的标记
        cleaned_content = re.sub(r'```json|```', '', content).strip()

        # 解析为 JSON
        result = json.loads(cleaned_content)

        Reason = result['faultLocalization'][0]['reason']
    # except Exception as e:
    #     print(f"读取原因失败: {reason_path}, 错误: {e}")

    # 整合为一个 JSON 格式的字典
    result_json = {
        "AnswerID": ID,
        "correctVersion": correctVersion,
        "faultyVersion": faultyVersion,
        "faultLocation": faultLocation,
        "reason": Reason,
        "Reasonability": Reasonability,
        "Readability": Readability,
        "Practicality": Practicality
    }
    
    return result_json  # 返回格式化后的 JSON 字符串

def analyze_BugT(experiment_index, model_name, rangeIndex,root_path):
    filtercaselist = []
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
                cpp_path = os.path.join(question_path, "C++")
                questions = os.listdir(cpp_path)
                answers = os.listdir(cpp_path)
            except:
                print("列出CppPath " + cpp_path + " 失败")
                continue
            for answer in answers:
            
                if process_num > rangeIndex:
                    print("达到上线: " + str(rangeIndex))
                    break

                code_location = os.path.join(cpp_path, answer, "correctVersion.cpp")
                faultcode_location = os.path.join(cpp_path, answer, "faultyVersion.cpp")
                faulte_data_path = os.path.join(cpp_path, answer, "faultLocation.txt")
               
                ans_path = os.path.join(cpp_path, answer, model_name, str(experiment_index))
                reason_path = os.path.join(ans_path, "response.txt")
                top_N_path = os.path.join(ans_path, "topN.txt")

                topN_str = 100
                try:
                    with open(top_N_path, 'r') as file:
                        topN_str = file.read()
                except:
                    print("读取topN失败:", top_N_path)
             
                topN_Index = int(topN_str)

                if topN_Index <= 1:  
                    process_num += 1  
                    result = generateJson(code_location,faultcode_location,faulte_data_path,reason_path,answer)              
                    filtercaselist.append(result)
                else:
                    continue
    title = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq5/"+model_name+"/filterList.csv"

    # 将 JSON 数组转换为 Pandas DataFrame
    df = pd.DataFrame(filtercaselist)

    # 输出为 CSV 文件
    df.to_csv(title, index=False, encoding='utf-8')

    print("CSV 文件已保存")

if __name__ == "__main__":
    root_path = "/home/xuhexiang/data/BugT/Code"
    analyze_BugT( 6, "o1-preview", 30, root_path)
    analyze_BugT( 6, "deepseekV3", 30, root_path)
