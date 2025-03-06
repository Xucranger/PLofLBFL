
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
            return 0
    return 0  # 如果没有匹配的结果，返回None


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

def draw_pic(path,modelname,dataset,havelegend):
    # 样例数据

    data = {}
    # 读取文件
    rawdata = ""
    with open(path, 'r', encoding='utf-8') as file:
        rawdata = file.read()
    rawdata = "{"+rawdata+"}"
    print(rawdata)
    data = ast.literal_eval(rawdata)
    # 获取所有TopN集合的并集
    all_values = set(data['Top1']) | set(data['Top3']) | set(data['Top5']) | set(data['Top10'])

    # 将并集中的元素按升序排列，方便划分
    x_values = sorted(all_values)

    # 划分为7个难度区间
    num_splits = 5
    min_value = min(x_values)
    max_value = max(x_values)

    # 根据数值范围划分难度区间
    intervals = np.linspace(min_value, max_value, num_splits + 1)

    # 每个区间内的数据
    intervals_labels = [f'{int(intervals[i])}-{int(intervals[i + 1])}' for i in range(num_splits)]

    # 初始化统计结果
    counts_per_interval = np.zeros((num_splits, 4))  # 4列对应Top1, Top3, Top5, Top10的计数

    # 统计每个区间内的元素在Top1, Top3, Top5, Top10中的出现次数
    for x in x_values:
        # 确定当前元素属于哪个区间
        interval_idx = np.digitize(x, intervals) - 1  # 获取区间索引

        # 如果 x == max_value，确保它落在最后一个区间
        if interval_idx == num_splits:
            interval_idx = num_splits - 1
        
        # 统计当前元素在各个TopN列表中的出现次数
        counts_per_interval[interval_idx, 0] += data['Top1'].count(x)
        counts_per_interval[interval_idx, 1] += data['Top3'].count(x)
        counts_per_interval[interval_idx, 2] += data['Top5'].count(x)
        counts_per_interval[interval_idx, 3] += data['Top10'].count(x)

    # # 绘制重叠堆叠条形图
    # plt.figure(figsize=(12, 8))  # 调整图片的大小

    # # 按照从小到大的顺序绘制：先绘制Top1，最后绘制Top10
    # plt.bar(intervals_labels, counts_per_interval[:, 3], label='Top10', color='c', alpha=0.7)  # Top10 最后绘制
    # plt.bar(intervals_labels, counts_per_interval[:, 2], label='Top5', color='r', alpha=0.7)   # Top5
    # plt.bar(intervals_labels, counts_per_interval[:, 1], label='Top3', color='g', alpha=0.7)   # Top3 然后绘制
    # plt.bar(intervals_labels, counts_per_interval[:, 0], label='Top1', color='b', alpha=0.7)   # Top1 先绘制

    # # 添加标签和标题
    # # plt.xlabel('Difficulty Range')
    # # plt.ylabel('Count')
    # # plt.title('Overlapping Counts of Top1, Top3, Top5, Top10 in Difficulty Ranges')
    # plt.legend()

    # # 自动调整布局以适应内容
    # plt.tight_layout()

    # # 显示图形
    # plt.grid(True)
    # # 获取 model_name 之前的部分
    # base_path = path.rsplit(modelname, 1)[0]  # 使用rsplit从右侧分割，只分割一次
    # title = base_path+modelname+"_difficulty_"+dataset+".png"
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

    # Categories
    categories = intervals_labels

    # Data
    # mytitle = 'Codeflaws_prompt_various.pdf'
    # top_1 = np.array([13, 11, 8, 8, 10, 11])
    # top_3 = np.array([24, 23, 21, 18, 20, 19])
    # top_5 = np.array([33, 32, 31, 28, 28, 27])

    # Condefects
    # mytitle = os.path.join('/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/',dataset)
    mytitle = os.path.join('/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/',dataset,modelname+'_'+dataset+'_difficulty.pdf')
    top_1 = counts_per_interval[:, 0]
    top_3 = counts_per_interval[:, 1]
    top_5 = counts_per_interval[:, 2]

    # X locations for the groups
    ind = np.arange(len(categories))

    # Bar width
    width = 0.25

    # Increase the figure size to make it wider
    plt.figure(figsize=(16, 7))

    # Create the subplot
    ax = plt.subplot(111)


    # Create bars
    rects1 = ax.bar(ind - width, top_1, width, label='Top-1', color=color1, edgecolor='black', linewidth=2)
    rects2 = ax.bar(ind, top_3, width, label='Top-3', color=color2, edgecolor='black', linewidth=2)
    rects3 = ax.bar(ind + width, top_5, width, label='Top-5', color=color3, edgecolor='black', linewidth=2)

    # Adjust the font sizes
    label_size = 30  # size for x and y labels
    title_size = 30  # size for the title
    ticks_size = 30  # size for the x and y ticks
    # Add some text for labels, title, and custom x-axis tick labels, etc.
    ax.set_xlabel('Difficulties', fontsize=34)
    ax.set_ylabel('Count', fontsize=label_size)
    # ax.set_title('Scores by category and top count', fontsize=title_size)
    ax.set_xticks(ind)
    ax.set_xticklabels(categories, fontsize=ticks_size)  # Rotate the category labels to prevent overlap
    # ax.set_yticklabels(fontsize=ticks_size)
    # 调整图表的布局，为图例留出空间
    if havelegend:
        ax.legend(fontsize=ticks_size,loc='upper left')
    ax.tick_params(axis='y', labelsize=ticks_size, width=2)  # 设置y轴刻度字体大小
    ax.tick_params(axis='x', width=2)  # 加粗y轴刻度线
    ax.yaxis.grid(True, linestyle='--', linewidth=0.5, color='gray')
    ax.spines['bottom'].set_linewidth(2)  # 加粗x轴
    ax.spines['left'].set_linewidth(2)    # 加粗y轴
    ax.spines['right'].set_linewidth(2)    # 加粗y轴
    ax.spines['top'].set_linewidth(2)    # 加粗y轴
    # Function to attach a text label above each bar, displaying its height.
    y_max = max(top_1.max(), top_3.max(), top_5.max())
    ax.set_ylim(0, y_max * 1.1)  # 为数字标签留出空间
    dynamic_fontsize = max(10, min(30, int(y_max / 10)))
    def autolabel(rects):
        for rect in rects:
            height = int(rect.get_height())
            ax.annotate('{}'.format(height),
                        xy=(rect.get_x() + rect.get_width() / 2, height),
                        xytext=(0, 3),  # 3 points vertical offset
                        textcoords="offset points",
                        ha='center', va='bottom', fontsize=22)  # 动态调整字体大小)

    # Call the function for each set of bars.
    autolabel(rects1)
    autolabel(rects2)
    autolabel(rects3)

    plt.subplots_adjust(top=0.90)  # 留出足够的空间给图例
    # 显示图例，并指定位置在图表上方的中央
    if havelegend:
        plt.legend(loc='upper center', bbox_to_anchor=(0.5, 1.14), ncol=len(categories), fontsize=ticks_size)
    # plt.tight_layout()  # Adjust the layout to fit everything

    print(mytitle)
    plt.savefig(mytitle)
    # plt.show()  # Display the plot我想要改进这段代码，要求画一张大图，横向排列三张图，公用一个label 



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

def analyze_BugT(experiment_index, model_name, rangeIndex,root_path,havelegend):
    # root_path = "/root/autodl-tmp/data/ConDefects-main/Code/"
    top1 = top2 = top3 = top4 = top5 = top10 = topNull = 0
    Condefects_Filter_Data = []
    top1_list = []
    top2_list = []
    top3_list = []
    top4_list = []
    top5_list = []
    top10_list = []
    difficultyrawlist = []
    
    # try:
    #     with open("D:/私人资料/论文/大模型相关/大模型错误定位实证研究/LLM_In_Novice_Program_FL/LocalTest/main_code/evaluate/Condefects_Filter_Data.pkl", 'rb') as file:
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
                difficultyrawlist.append(difficulty)
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
                   
                    top1_list.append(difficulty)
                if topN_Index <= 2:
                   
                    top2_list.append(difficulty)
  
                if topN_Index <= 3:
              
                    top3_list.append(difficulty)
      
                if topN_Index <= 4:
              
                    top4_list.append(difficulty)
                if topN_Index <= 5:
                  
                    top5_list.append(difficulty)
   
                if topN_Index <= 10:
                  
                    top10_list.append(difficulty)
                else:
                    topNull += 1

    # print("top1: ", top1)
    # print("top3: ", top3)
    # print("top5: ", top5)
    # print("top10: ", top10)
    # print("topNull: ", topNull)
    # total_Num = top10 + topNull


    title = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/BugT/difficultylist_"+model_name+ ".txt"
    with open(title, 'w') as file:
        # file.write("name:  top1 top3 top5 top10" + '\n')
        file.write("'Top1':"+str(top1_list)+',\n')
        file.write("'Top2':"+str(top2_list)+',\n')
        file.write("'Top3':"+str(top3_list)+',\n')
        file.write("'Top4':"+str(top4_list)+',\n')
        file.write("'Top5':"+str(top5_list)+',\n')
        file.write("'Top10':"+str(top10_list)+'\n')
    # title = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/BugT/difficultylist_"+model_name+ ".txt"
    # draw_pic(title,model_name,"BugT",havelegend)
    draw_rawdiff_pic(title,"BugT",difficultyrawlist)
    # res =  [top1_list,top3_list,top5_list]
    return None

def analyze_Condefects(experiment_index, model_name, rangeIndex,root_path):
    root_path = "/home/xuhexiang/data/ConDefects-main/Code/"
    top1 = top2 = top3 = top4 = top5 = top10 = topNull = 0
    # Condefects_Filter_Data = []
    top1_list = []
    top2_list = []
    top3_list = []
    top4_list = []
    top5_list = []
    top10_list = []
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
                difficultyrawlist.append(difficulty)
                topN_Index = int(topN_str)
                if topN_Index <= 1:
                   
                    top1_list.append(difficulty)
                if topN_Index <= 2:
                   
                    top2_list.append(difficulty)
  
                if topN_Index <= 3:
              
                    top3_list.append(difficulty)
                if topN_Index <= 4:
              
                    top4_list.append(difficulty)
      
                if topN_Index <= 5:
                  
                    top5_list.append(difficulty)
   
                if topN_Index <= 10:
                  
                    top10_list.append(difficulty)
                else:
                    topNull += 1

    title = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/Condefects/difficultylist_"+model_name+ ".txt"
    with open(title, 'w') as file:
        # file.write("name:  top1 top3 top5 top10" + '\n')
        file.write("'Top1':"+str(top1_list)+',\n')
        file.write("'Top2':"+str(top2_list)+',\n')
        file.write("'Top3':"+str(top3_list)+',\n')
        file.write("'Top4':"+str(top4_list)+',\n')
        file.write("'Top5':"+str(top5_list)+',\n')
        file.write("'Top10':"+str(top10_list)+'\n')
    # title = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/Condefects/difficultylist_"+model_name+ ".txt"
    # draw_pic(title,model_name,"Condefects",False)
    draw_rawdiff_pic(title,"Condefects",difficultyrawlist)
    return None

def analyze_Codeflaws(prompt,experiment_index,experiment_model,rangeIndex,root_path):
    top1 = top2= top3 = top4 = top5 = top10 = topNull = 0
    istop1=istop5=istop10=0
    err_list = []
    difficultyrawlist=[]
    top1_list = []
    top2_list = []
    top3_list = []
    top4_list = []
    top5_list = []
    top10_list = []
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
        difficultyrawlist.append(difficulty)
        topN_Index = int(topN_str)
        if topN_Index <= 1:
            
            top1_list.append(difficulty)
        if topN_Index <=2:
            top2_list.append(difficulty)

        if topN_Index <= 3:
        
            top3_list.append(difficulty)
        if topN_Index <=4:
            top4_list.append(difficulty)

        if topN_Index <= 5:
            
            top5_list.append(difficulty)

        if topN_Index <= 10:
            
            top10_list.append(difficulty)
        else:
            topNull += 1

    title = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/Codeflaws/difficultylist_"+experiment_model+ ".txt"
    with open(title, 'w') as file:
        # file.write("name:  top1 top3 top5 top10" + '\n')
        file.write("'Top1':"+str(top1_list)+',\n')
        file.write("'Top2':"+str(top2_list)+',\n')
        file.write("'Top3':"+str(top3_list)+',\n')
        file.write("'Top4':"+str(top4_list)+',\n')
        file.write("'Top5':"+str(top5_list)+',\n')
        file.write("'Top10':"+str(top10_list)+'\n')
    # title = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/Codeflaws/difficultylist_"+experiment_model+ ".txt"
    # draw_pic(title,experiment_model,"Codeflaws",False)
    draw_rawdiff_pic(title,"Codeflaws",difficultyrawlist)



if __name__ == "__main__":
    # model_name="chatGlm3"
    # gpt-4
    # experiment_model = "gpt-3.5-turbo"

    # 画codeflaws上的
    # title = "LLMs_in_Codeflaws_5"
    root_path = "/home/xuhexiang/data/codeflaws/version"
    ans_o1preview = analyze_Codeflaws("prompt", 1, "o1-preview", 503,root_path)
    # ans_mini = analyze_Codeflaws("prompt", 1, "o1-mini", 503,root_path)
    # ans_gpt4o = analyze_Codeflaws("prompt", 1, "gpt-4o", 503,root_path)
    # ans_gpt4 = analyze_Codeflaws("prompt", 1, "gpt-4", 503,root_path)
    # ans_gpt3_5 = analyze_Codeflaws("prompt", 1, "gpt-3.5-turbo", 503,root_path)

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
    root_path = "/home/xuhexiang/data/ConDefects-main/Code"
    ans_o1preview = analyze_Condefects( 1, "o1-preview", 503, root_path)
    # ans_mini = analyze_Condefects( 1, "o1-mini", 503, root_path)
    # ans_gpt4o = analyze_Condefects( 1, "gpt-4o", 503, root_path)
    # ans_gpt4 = analyze_Condefects( 1, "gpt-4", 503, root_path)
    # ans_gpt3_5 = analyze_Condefects( 1, "gpt-3.5-turbo", 503, root_path)
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
    root_path = "/home/xuhexiang/data/BugT/Code"
    ans_mini = analyze_BugT( 6, "o1-mini", 503, root_path,False)
    # ans_o1preview = analyze_BugT( 6, "o1-preview", 503, root_path,False)
    # ans_gpt4 = analyze_BugT( 6, "gpt-4", 503, root_path,False)
    # ans_gpt4o = analyze_BugT( 6, "gpt-4o", 503, root_path,False)
    # ans_gpt3_5 = analyze_BugT( 6, "gpt-3.5-turbo", 503, root_path,True)
    # ans_chatGlm4 = analyze_BugT( 1, "chatGlm4", 503, root_path,False)

    # print("over")


