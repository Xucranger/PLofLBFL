
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
import csv
import matplotlib.pyplot as plt
import pandas as pd

import matplotlib.pyplot as plt
import numpy as np
from mpl_toolkits.mplot3d import Axes3D

def plot_3d_bar_chart(sorted_questions):
    # 颜色定义
    color1 = (51/255, 57/255, 91/255)  # 红色
    color2 = (93/255, 116/255, 162/255)  # 绿色
    color3 = (196/255, 216/255, 242/255)  # 蓝色
    color4 = (242/255, 232/255, 227/255)  # 浅色
    color5 = (142/255, 45/255, 48/255)  # 深红色
    
    colors = [color1, color2, color3, color4, color5]  # 颜色列表

    categories = [1, 2, 3, 4, 5]  # 难度等级
    num_groups = len(sorted_questions)  # 五组数据
    
    # X, Y, Z 数据
    x = []
    y = []
    z = []  # Z轴起始值为0
    dx = np.ones(5 * num_groups)/2  # 每个柱子的宽度
    dy = np.ones(5 * num_groups)/2  # 每个难度的柱子的深度
    dz = []

    for i, group in enumerate(sorted_questions):
        # 每个组的准确率
        if len(group) != 5:
            print(f"Error: Group {i+1} does not have 5 accuracy values.")
            continue  # 如果某组数据长度不对，则跳过
        accuracy = group  # group 是每组的准确率
        print(f"Group {i+1} Accuracy Values: {accuracy}")  # 打印每组的准确率，检查数据
        dz.extend(accuracy)  # 将每个组的准确率添加到Z轴

        # 为每个组设置 X, Y 坐标
        x.extend([i] * len(categories))  # 每个组在X轴上的位置
        y.extend(categories)  # 难度等级在Y轴的位置
        z.extend([0] * len(categories))  # 所有柱子的Z轴起始位置为0

    # 确保数据长度一致
    assert len(x) == len(y) == len(z) == len(dz), "The lengths of x, y, z, and dz are not matching."

    # 创建3D坐标轴
    fig = plt.figure(figsize=(16, 7))
    ax = fig.add_subplot(111, projection='3d')

    # 绘制每组柱子，并为每组指定不同颜色
    for i in range(num_groups):
        ax.bar3d(x[i*5:(i+1)*5], y[i*5:(i+1)*5], z[i*5:(i+1)*5], dx[i*5:(i+1)*5], dy[i*5:(i+1)*5], dz[i*5:(i+1)*5], 
                 color=colors[i], edgecolor=None)

    # 设置标签和标题
    ax.set_xlabel('Groups')
    ax.set_ylabel('Difficulties')
    ax.set_zlabel('Accuracy')

    # 设置X, Y, Z轴的刻度
    ax.set_xticks(np.arange(num_groups))
    ax.set_xticklabels(['o1-preview','o1-mini','gpt-4o','gpt-4','gpt-3.5'])
    ax.set_yticks(categories)
    ax.set_yticklabels([f'Difficulty {i}' for i in categories])

    # 设置标题
    ax.set_title('3D Bar Chart of Accuracy for Different Groups and Difficulties')

    plt.savefig("/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/11.pdf")

def plot_line_chart(sorted_questions,dataset,top):
    # 颜色定义
    color1 = (51/255, 57/255, 91/255)  # 红色
    color2 = (93/255, 116/255, 162/255)  # 绿色
    color3 = (196/255, 216/255, 242/255)  # 蓝色
    color4 = (242/255, 232/255, 227/255)  # 浅色
    color5 = (142/255, 45/255, 48/255)  # 深红色
    
    colors = [color1, color2, color3, color4, color5]  # 颜色列表

    categories = [1, 2, 3, 4, 5]  # 难度等级
    num_groups = len(sorted_questions)  # 五组数据
    
    # 创建图表
    fig, ax = plt.subplots(figsize=(16, 7))
    labels = ['o1-preview','o1-mini','gpt-4o','gpt-4','gpt-3.5']
    # 绘制每组数据的折线
    for i, group in enumerate(sorted_questions):
        if len(group) != 5:
            print(f"Error: Group {i+1} does not have 5 accuracy values.")
            continue  # 如果某组数据长度不对，则跳过
        accuracy = group  # group 是每组的准确率
        print(f"Group {i+1} Accuracy Values: {accuracy}")  # 打印每组的准确率，检查数据
        
        # 绘制折线
        ax.plot(categories, accuracy, marker='o', color=colors[i], label=labels[i])

    # 设置标签和标题
    ax.set_xlabel('Difficulties')
    ax.set_ylabel('Accuracy')

    # 设置X轴和Y轴的刻度
    ax.set_xticks(categories)
    ax.set_xticklabels([f'Difficulty {i}' for i in categories])

    # 设置标题
    ax.set_title('Line Chart of Accuracy for Different Groups and Difficulties')

    # 添加图例
    ax.legend()

    # 保存图表model,dataset,top
    plt.savefig("/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/"+dataset+'/'+dataset+'_'+str(top)+'.pdf')



def get_difficulty_of_Codeflaws(contestId,index):
    difficulty_json = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/codeforceproblems.json"
    with open(difficulty_json, 'r', encoding='utf-8') as file:
        data = file.read()
    data = json.loads(data)
    # 遍历所有问题
    for problem in data["result"]["problems"]:
        # 检查contestId和index是否匹配
        if problem["contestId"] == int(contestId) and problem["index"] == index:
            if  "rating" in problem:
                return problem["rating"]
            return 1300
    return 1400  # 如果没有匹配的结果，返回None


def get_difficulty_of_Codefects(question):
    root_path = "/home/xuhexiang/data/ConDefects-main/difficulty.txt"
    with open(root_path,'r') as file:
        difficultyinfo = file.read()
    # 按行分割输入字符串
    lines = difficultyinfo.strip().split('\n')
    
    # 提取每一行的数字并转化为整数
    numbers = []
    for line in lines:
        # 假设数字在每行的最后，分割后取最后一个部分
        parts = line.split()
        if parts[0] == question:
            if parts[-1] == "unknown":
                return 0
            return int(parts[-1])

def get_difficulty_of_Bugt(problem_id):
    """
    从Excel表格中查找题目难度。

    参数：
        file_path (str): Excel文件路径。
        problem_id (int): 输入的题目ID。

    返回：
        int: 题目难度。
        None: 如果未找到题目ID。
    """
    file_path = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/20240730 BUCTOJ全部题目难度和专题标签.xlsx"
    try:
        # 读取Excel文件
        df = pd.read_excel(file_path)
        # 确保字段名一致
        if 'OJ problem ID' not in df.columns or '题目难度（大概cf rating）' not in df.columns:
            raise ValueError("Excel表缺少必要的字段：'OJ problem ID' 或 '题目难度（大概cf rating）'")

        # 查找题目ID对应的难度
        result = df.loc[df['OJ problem ID'] == problem_id, '题目难度（大概cf rating）']

        if not result.empty:
            return int(result.iloc[0])
        else:
            return None

    except Exception as e:
        print(f"发生错误: {e}")
        return None

def draw_pic(path,modelname,dataset,havelegend,sorted_questions):
    # 样例数据

    groups = [sorted_questions[i:i+100] for i in range(0, 500, 100)]

    # 计算每份的准确率，准确率 = False 个数 / 100，保留两位小数
    accuracy_per_group = []
    for group in groups:
        # 计算当前组中 False 的个数
        false_count = sum(1 for question in group if  question[2])  # 统计 False 的个数
        
        # 计算准确率并保留两位小数
        accuracy = round(false_count / 100, 2)
        accuracy_per_group.append(accuracy)

    # 计算准确率的平均值
    # avg_accuracy_per_difficulty = [sum(accuracy[i] for accuracy in accuracy_per_group) / len(accuracy_per_group) for i in range(5)]

    # 绘制折线图
    difficulty_levels = [1, 2, 3, 4, 5]
    plt.plot(difficulty_levels, accuracy_per_group, marker='o', linestyle='-', color='b', label='Accuracy')

    plt.xlabel('DiffiCulty Level')
    plt.ylabel('Accuracy')
    plt.title('Accuracy')
    plt.xticks(difficulty_levels)  # 设置X轴为1至5的难度等级
    plt.yticks([round(i * 0.1, 1) for i in range(11)])  # 设置Y轴刻度从0到1
    plt.grid(True)
    plt.legend()
    mytitle = os.path.join('/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/',dataset,modelname+'_'+dataset+'_difficulty.pdf')
    plt.savefig(mytitle)
    return


def save_results_to_csv(sorted_questions, file_path):
    with open(file_path, mode='w', newline='', encoding='utf-8') as file:
        writer = csv.writer(file)
        # 写入表头
        writer.writerow(["题目", "难度", "是否前十"])
        # 写入每一行数据
        for question in sorted_questions:
            writer.writerow([question[0], question[1], question[2]])

def draw_rawdiff_pic(path,dataset,arr):
    # 排序数组
    arr.sort()

    # 确定分组的区间数目
    num_groups = 5
    min_value = min(arr)
    max_value = max(arr)

    # 计算每组的区间大小
    bin_size = (max_value - min_value) / num_groups

    # 创建七个区间
    bins = [min_value + i * bin_size for i in range(num_groups + 1)]

    # 使用 numpy 的 histogram 进行分组统计
    import numpy as np
    counts, edges = np.histogram(arr, bins=bins)

    # # 绘制柱状图
    # plt.bar(edges[:-1], counts, width=bin_size, align='edge', edgecolor='black')
    # plt.xlabel('Value Range')
    # plt.ylabel('Count')
    # plt.title('Distribution of Numbers in 7 Groups')
    # plt.xticks(edges, rotation=45)
  
    # # 自动调整布局以适应内容
    # plt.tight_layout()

    # # 获取 model_name 之前的部分
    # title = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/difficultdata/all_difficulty_"+dataset+".png"
    # plt.savefig(title, dpi=300, bbox_inches='tight')
    config = {
    "font.family": 'Times New Roman',
    "mathtext.fontset": 'stix',
    "font.serif": ['SimSun'],
    }
    rcParams.update(config)
    color1 = (51/255, 57/255, 91/255)  # 红色
    color2  = (93/255, 116/255, 162/255)  # 绿色
    color3 = (196/255, 216/255, 242/255)  # 蓝色
    # 根据数值范围划分难度区间
    intervals = np.linspace(min_value, max_value, num_groups + 1)
    # 每个区间内的数据
    intervals_labels = [f'{int(intervals[i])}-{int(intervals[i + 1])}' for i in range(num_groups)]
    # Categories
    categories = intervals_labels

    # Data
    # mytitle = 'Codeflaws_prompt_various.pdf'
    # top_1 = np.array([13, 11, 8, 8, 10, 11])
    # top_3 = np.array([24, 23, 21, 18, 20, 19])
    # top_5 = np.array([33, 32, 31, 28, 28, 27])

    # Condefects
    mytitle = '/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/'+dataset+'_rawdifficulty.pdf'
    count = counts


    # X locations for the groups
    ind = np.arange(len(categories))

    # Bar width
    width = 0.25

    # Increase the figure size to make it wider
    plt.figure(figsize=(16, 7))

    # Create the subplot
    ax = plt.subplot(111)


    # Create bars
    rects1 = ax.bar(ind, count, width, label='Top-1', color=color1, edgecolor='black', linewidth=2)


    # Adjust the font sizes
    label_size = 35  # size for x and y labels
    title_size = 35  # size for the title
    ticks_size = 35  # size for the x and y ticks
    # Add some text for labels, title, and custom x-axis tick labels, etc.
    ax.set_xlabel('Difficulty Range', fontsize=label_size)
    ax.set_ylabel('', fontsize=label_size)
    # ax.set_title('Scores by category and top count', fontsize=title_size)
    ax.set_xticks(ind)
    ax.set_xticklabels(categories, fontsize=ticks_size)  # Rotate the category labels to prevent overlap
    # ax.set_yticklabels(fontsize=ticks_size)
    # 调整图表的布局，为图例留出空间
    # ax.legend(fontsize=ticks_size,loc='upper left')
    ax.tick_params(axis='y', labelsize=ticks_size, width=2)  # 设置y轴刻度字体大小
    ax.tick_params(axis='x', width=2)  # 加粗y轴刻度线
    ax.yaxis.grid(True, linestyle='--', linewidth=0.5, color='gray')
    ax.spines['bottom'].set_linewidth(2)  # 加粗x轴
    ax.spines['left'].set_linewidth(2)    # 加粗y轴
    ax.spines['right'].set_linewidth(2)    # 加粗y轴
    ax.spines['top'].set_linewidth(2)    # 加粗y轴
    # Function to attach a text label above each bar, displaying its height.
    y_max = counts.max()
    ax.set_ylim(0, y_max * 1.1)  # 为数字标签留出空间
    dynamic_fontsize = max(10, min(30, int(y_max / 10)))
    def autolabel(rects):
        for rect in rects:
            height = rect.get_height()
            ax.annotate('{}'.format(height),
                        xy=(rect.get_x() + rect.get_width() / 2, height),
                        xytext=(0, 3),  # 3 points vertical offset
                        textcoords="offset points",
                        ha='center', va='bottom', fontsize=label_size)  # 动态调整字体大小)

    # Call the function for each set of bars.
    autolabel(rects1)
    plt.tight_layout()  # Adjust the layout to fit everything
    # plt.subplots_adjust(top=0.5) 
    plt.subplots_adjust(bottom=0.15)  # 留出足够的空间给图例
    # 显示图例，并指定位置在图表上方的中央
    # plt.legend(loc='upper center', bbox_to_anchor=(0.5, 1.14), ncol=len(categories), fontsize=ticks_size)
    # plt.tight_layout()  # Adjust the layout to fit everything


    plt.savefig(mytitle)

def analyze_BugT(experiment_index, model_name, rangeIndex,root_path,havelegend,top):
    difficultyrawlist = []
    process_num = 0
    # 遍历文件夹中的所有内容
    questions = os.listdir(root_path)
    for question in questions:
        if process_num > rangeIndex:
            print("达到上线: " + str(rangeIndex))
            break
        question_path = os.path.join(root_path, question)
        difficulty = get_difficulty_of_Bugt(int(question))
        # 检查是否为文件夹
        if os.path.isdir(question_path):
            # print(f'子文件夹: {contest_path}')
            try:
                cpp_path = os.path.join(question_path, "C++")
                questions = os.listdir(cpp_path)
                answers = os.listdir(cpp_path)
            except:
                print("列出CppPath " + cpp_path + " 失败")
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
             
                topN_Index = int(topN_str)

                if topN_Index <= top:                  
                    difficultyrawlist.append((answer,difficulty,True))
                else:
                    difficultyrawlist.append((answer,difficulty,False))

         # 根据难度进行排序，难度升序排列（难<中等<易）
    sorted_questions = sorted(difficultyrawlist, key=lambda x: x[1])


    title = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/BugT/difficultylist_"+model_name+ ".csv"
    save_results_to_csv(sorted_questions, title)
    groups = [sorted_questions[i:i+100] for i in range(0, 500, 100)]

    # 计算每份的准确率，准确率 = False 个数 / 100，保留两位小数
    accuracy_per_group = []
    # 相对值的
    # for group in groups:
    #     # 计算当前组中 False 的个数
    #     false_count = sum(1 for question in group if  question[2])  # 统计 False 的个数
        
    #     # 计算准确率并保留两位小数
    #     accuracy = round(false_count / 100, 2)
    #     accuracy_per_group.append(accuracy)

    # 绝对值的
    for group in groups:
        # 计算当前组中 False 的个数
        false_count = sum(1 for question in group if  question[2])  # 统计 False 的个数
        
        # 计算准确率并保留两位小数
      
        accuracy_per_group.append(false_count)
    # draw_rawdiff_pic(title,"Condefects",difficultyrawlist)
    return list(reversed(accuracy_per_group))

def analyze_Condefects(experiment_index, model_name, rangeIndex,root_path,top):
    
    difficultyrawlist = []
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
        difficulty = get_difficulty_of_Codefects(question)
        if difficulty == 0:
            continue
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
               
                if topN_Index <= top:                  
                    difficultyrawlist.append((answer,difficulty,True))
                else:
                    difficultyrawlist.append((answer,difficulty,False))

    sorted_questions = sorted(difficultyrawlist, key=lambda x: x[1])
    title = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/Condefects/difficultylist_"+model_name+str(top)+ ".csv"
    save_results_to_csv(sorted_questions, title)
    # title = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/Condefects/difficultylist_"+model_name+ ".txt"
    groups = [sorted_questions[i:i+100] for i in range(0, 500, 100)]

    # 计算每份的准确率，准确率 = False 个数 / 100，保留两位小数
    accuracy_per_group = []
    # 相对值的
    # for group in groups:
    #     # 计算当前组中 False 的个数
    #     false_count = sum(1 for question in group if  question[2])  # 统计 False 的个数
        
    #     # 计算准确率并保留两位小数
    #     accuracy = round(false_count / 100, 2)
    #     accuracy_per_group.append(accuracy)

    # 绝对值的
    for group in groups:
        # 计算当前组中 False 的个数
        false_count = sum(1 for question in group if  question[2])  # 统计 False 的个数
        
        # 计算准确率并保留两位小数
      
        accuracy_per_group.append(false_count)
    # draw_rawdiff_pic(title,"Condefects",difficultyrawlist)
    return list(reversed(accuracy_per_group))

def analyze_Codeflaws(prompt,experiment_index,experiment_model,rangeIndex,root_path,top):
    difficultyrawlist=[]
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
        ans_path = os.path.join(root_path, versionStr, "test_data", "info.txt")
        top_N_path = os.path.join(root_path, versionStr, "test_data",experiment_model, str(experiment_index), "topN.txt")
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
        difficulty = get_difficulty_of_Codeflaws(contestId,index)
        if difficulty == 0:
            continue
        topN_str = 100
        try:
            with open(top_N_path, 'r') as file:
                topN_str = file.read()
        except:
            print("读取topN失败:", top_N_path)

            # err_list.append(versionInt)

        topN_Index = int(topN_str)
        if topN_Index <= top:                  
            difficultyrawlist.append((versionStr,difficulty,True))
        else:
            difficultyrawlist.append((versionStr,difficulty,False))

    sorted_questions = sorted(difficultyrawlist, key=lambda x: x[1])
    groups = [sorted_questions[i:i+100] for i in range(0, 500, 100)]

    # 计算每份的准确率，准确率 = False 个数 / 100，保留两位小数
    accuracy_per_group = []
    # 相对值的
    # for group in groups:
    #     # 计算当前组中 False 的个数
    #     false_count = sum(1 for question in group if  question[2])  # 统计 False 的个数
        
    #     # 计算准确率并保留两位小数
    #     accuracy = round(false_count / 100, 2)
    #     accuracy_per_group.append(accuracy)

    # 绝对值的
    for group in groups:
        # 计算当前组中 False 的个数
        false_count = sum(1 for question in group if  question[2])  # 统计 False 的个数
        
        # 计算准确率并保留两位小数
      
        accuracy_per_group.append(false_count)
    # draw_rawdiff_pic(title,"Condefects",difficultyrawlist)
    return list(reversed(accuracy_per_group))



if __name__ == "__main__":
    # model_name="chatGlm3"
    # gpt-4
    # experiment_model = "gpt-3.5-turbo"

    # 画codeflaws上的
    # title = "LLMs_in_Codeflaws_5"
    for i in range(1,6):
        root_path = "/home/xuhexiang/data/codeflaws/version"
        ans_o1preview = analyze_Codeflaws("prompt", 1, "o1-preview", 503,root_path,i)
        ans_mini = analyze_Codeflaws("prompt", 1, "o1-mini", 503,root_path,i)
        ans_gpt4o = analyze_Codeflaws("prompt", 1, "gpt-4o", 503,root_path,i)
        ans_gpt4 = analyze_Codeflaws("prompt", 1, "gpt-4", 503,root_path,i)
        ans_gpt3_5 = analyze_Codeflaws("prompt", 1, "gpt-3.5-turbo", 503,root_path,i)
        ans_chatGlm4 = analyze_Codeflaws("prompt", 1, "chatGlm4", 503,root_path,i)
        ans_chatGlm3 = analyze_Codeflaws("prompt", 1, "chatGlm3", 503,root_path,i)
        ans_deepseekV3 = analyze_Codeflaws("prompt", 1, "deepseekV3", 503,root_path,i)
        ans_llama3 = analyze_Codeflaws("prompt", 1, "llama3", 503,root_path,i)
        root_path = "/home/xuhexiang/data_openLLM/codeflaws/version"
        ans_llama2 = analyze_Codeflaws("prompt", 1, "openbuddy-llama", 503, root_path,i)
        ans_codellama = analyze_Codeflaws("prompt", 1, "code-llama", 503, root_path,i)

        # 示例数据：五组的准确率数据（每组的准确率）
        sorted_questions = [
            ans_o1preview,ans_mini,ans_gpt4o,ans_gpt4,ans_gpt3_5,ans_chatGlm4,ans_chatGlm3,ans_deepseekV3,ans_llama3,ans_llama2,ans_codellama
        ]
        # 将二维数组转换为DataFrame
        df = pd.DataFrame(sorted_questions)

        # 保存为CSV文件
        df.to_csv('Codeflaws.csv', index=False, header=False)  # `index=False`表示不保存行索引，`header=False`表示不保存列名
    #     # plot_3d_bar_chart(sorted_questions)
    #     plot_line_chart(sorted_questions,"Codeflaws",i)
    # with open("./"+title+".txt", 'w') as file:
    #     file.write("name:  top1 top2 top3 top4 top5" + '\n')
    #     file.write("ans_gpt4: "+str(ans_gpt4)+'\n')
    #     file.write("ans_gpt3_5: " + str(ans_gpt3_5)+'\n')
    #     file.write("ans_chatGlm3: " + str(ans_chatGlm3)+'\n')
    #     file.write("ans_llama: " + str(ans_llama)+'\n')
    #     file.write("ans_codellama: " + str(ans_codellama)+'\n')
    # print("over")

    # # 画condefects上的
    # title = "LLMs_in_Condefects_5"
    # for i in range(1,6):
    #     root_path = "/home/xuhexiang/data/ConDefects-main/Code"
    #     ans_o1preview = analyze_Condefects( 1, "o1-preview", 503, root_path,i)
    #     ans_mini = analyze_Condefects( 1, "o1-mini", 503, root_path,i)
    #     ans_gpt4o = analyze_Condefects( 1, "gpt-4o", 503, root_path,i)
    #     ans_gpt4 = analyze_Condefects( 1, "gpt-4", 503, root_path,i)
    #     ans_gpt3_5 = analyze_Condefects( 1, "gpt-3.5-turbo", 503, root_path,i)
    #     ans_chatGlm4 = analyze_Condefects( 1, "chatGlm4", 503, root_path,i)
    #     ans_chatGlm3 = analyze_Condefects( 1, "chatGlm3", 503, root_path,i)
    #     ans_deepseekV3 = analyze_Condefects( 1, "deepseekV3", 503, root_path,i)
    #     ans_llama3 = analyze_Condefects( 1, "llama3", 503, root_path,i)
    #     root_path = "/home/xuhexiang/data_openLLM/ConDefects-main/Code"
    #     ans_llama2 = analyze_Condefects( 1, "openbuddy-llama", 503, root_path,i)
    #     ans_codellama = analyze_Condefects( 1, "code-llama", 503, root_path,i)

    #     # 示例数据：五组的准确率数据（每组的准确率）
    #     sorted_questions = [
    #         ans_o1preview,ans_mini,ans_gpt4o,ans_gpt4,ans_gpt3_5,ans_chatGlm4,ans_chatGlm3,ans_deepseekV3,ans_llama3,ans_llama2,ans_codellama
    #     ]
    #     # 将二维数组转换为DataFrame
    #     df = pd.DataFrame(sorted_questions)

    #     # 保存为CSV文件
    #     df.to_csv('Condefects.csv', index=False, header=False)  # `index=False`表示不保存行索引，`header=False`表示不保存列名
    #     # plot_3d_bar_chart(sorted_questions)
        # plot_line_chart(sorted_questions,"Codeflaws",i)
    #     # plot_3d_bar_chart(sorted_questions)
    #     plot_line_chart(sorted_questions,"Condefects",i)
    # ans_gpt3_5 = analyze_Codeflaws("prompt", 1, "gpt-3.5-turbo", 503,root_path)
    # root_path = "D:/私人资料/论文/大模型相关/大模型错误定位实证研究/data_2024_0313/ConDefects-main/Code"
    # ans_llama = analyze_Condefects( 1, "openbuddy-llama", 503, root_path)
    # ans_codellama = analyze_Condefects( 1, "code-llama", 503, root_path)


    # with open("./"+title+".txt", 'w') as file:
    #     file.write("name:  top1 top3 top5 top10" + '\n')
    #     file.write("ans_gpt4: "+str(ans_gpt4)+'\n')
    #     file.write("ans_gpt3_5: " + str(ans_gpt3_5)+'\n')
    #     file.write("ans_chatGlm3: " + str(ans_chatGlm3)+'\n')
    #     file.write("ans_llama: " + str(ans_llama)+'\n')
    #     file.write("ans_codellama: " + str(ans_codellama)+'\n')
    # print("over")
    #画BugT上的
    # title = "LLMs_in_BugT_5"
    # for i in range(1,6):
    #     root_path = "/home/xuhexiang/data/BugT/Code"
    #     ans_mini = analyze_BugT( 6, "o1-mini", 503, root_path,False,i)
    #     ans_o1preview = analyze_BugT( 6, "o1-preview", 503, root_path,False,i)
    #     ans_gpt4 = analyze_BugT( 6, "gpt-4", 503, root_path,False,i)
    #     ans_gpt4o = analyze_BugT( 6, "gpt-4o", 503, root_path,False,i)
    #     ans_gpt3_5 = analyze_BugT( 6, "gpt-3.5-turbo", 503, root_path,True,i)
    #     ans_chatGlm4 = analyze_BugT( 1, "chatGlm4", 503, root_path,False,i)
    #     ans_chatGlm3 = analyze_BugT( 1, "chatGlm3", 503, root_path,False,i)
    #     ans_deepseekV3 = analyze_BugT( 6, "deepseekV3", 503, root_path,False,i)
    #     ans_llama2 = analyze_BugT( 1, "llama2", 503, root_path,False,i)
    #     ans_llama3 = analyze_BugT( 1, "llama3", 503, root_path,False,i)
    #     # root_path = "D:/私人资料/论文/大模型相关/大模型错误定位实证研究/data_2024_0313/ConDefects-main/Code"
    #     # ans_llama = analyze_Condefects( 1, "openbuddy-llama", 503, root_path)
    #     ans_codellama = analyze_BugT( 1, "codellama", 503, root_path,False,i)

    #     sorted_questions = [
    #         ans_o1preview,ans_mini,ans_gpt4o,ans_gpt4,ans_gpt3_5,ans_chatGlm4,ans_chatGlm3,ans_deepseekV3,ans_llama3,ans_llama2,ans_codellama
    #     ]
    #            # 将二维数组转换为DataFrame
    #     df = pd.DataFrame(sorted_questions)

    #     # 保存为CSV文件
    #     df.to_csv('BugT.csv', index=False, header=False)
    #     plot_line_chart(sorted_questions,"BugT",i)
    # print("over")


