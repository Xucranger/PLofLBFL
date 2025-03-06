import matplotlib.pyplot as plt
from matplotlib import rcParams
import numpy as np
import ast  
from matplotlib.backends.backend_pdf import PdfPages
import matplotlib.pyplot as plt
from matplotlib_venn import venn2
import seaborn as sns
import os
import json
import pickle
import matplotlib.pyplot as plt
import pandas as pd
from collections import Counter
def get_tags_of_Codeflaws(contestId,index):
    difficulty_json = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/codeforceproblems.json"
    with open(difficulty_json, 'r', encoding='utf-8') as file:
        data = file.read()
    data = json.loads(data)

    # 遍历所有问题
    for problem in data["result"]["problems"]:
        # 检查contestId和index是否匹配
        if problem["contestId"] == int(contestId) and problem["index"] == index:
            if  "tags" in problem:
           
                return problem["tags"]
            return []
    return []  # 如果没有匹配的结果，返回None


if __name__ == "__main__":
    root_path = "/home/xuhexiang/data/codeflaws/version"
    list = ['128','147','162','166','173','174','210','226','338','341','357','386','389','451','455','466']
    tag_counter = Counter()
    # for versionStr in list:

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
        if process_num>503:
            break
        ans_path = os.path.join(root_path, versionStr, "test_data", "info.txt")
        with open(ans_path,'r') as file:
            info = file.read()
        
        # 按行分割字符串
        lines = info.strip().split('\n')
        
        # 获取最后一行
        last_line = lines[-1]
        
        # 假设最后一行的格式是 contestId-index-bugstart-bugend.c
        parts = last_line.split('-')
        
        # 提取contestId和index
        contestId = parts[0]
        index = parts[1]
        tags = get_tags_of_Codeflaws(contestId,index)
        # 更新Counter
        tag_counter.update(tags)
    print(tag_counter)
