from matplotlib.colors import LinearSegmentedColormap
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
import os 
import json
import ast
import pickle
# from getdifficulty import get_difficulty_of_Bugt,get_difficulty_of_Codefects,get_difficulty_of_Codeflaws

import matplotlib.pyplot as plt
import seaborn as sns

def generate_heatmaps(data1, data2, data3, data4, output_path):
    """
    生成四个热力图，并保存为文件。

    参数:
    data1, data2, data3, data4: 6x5 数据数组，用于绘制热力图
    output_path: 保存图像的路径
    """
    # 创建画布，指定宽高比
    fig, axes = plt.subplots(1, 4, figsize=(20, 6), sharey=True)  # 1行4列

    # 共享颜色范围
    vmin, vmax = 0, 1  # 定义颜色范围
    
    # 设置字体配置
    plt.rcParams.update({
        "font.family": 'Times New Roman',
        "mathtext.fontset": 'stix',
        "font.serif": ['SimSun'],
    })

    # 定义自定义颜色映射
    # 最低值为绿色，中间值为白色，最高值为红色
    colors = [
        (30/255, 40/255, 100/255),    # 深蓝色（最低值）
        (180/255, 200/255, 230/255),  # 浅蓝色（中间值）
        (50/255, 60/255, 120/255)     # 深蓝色（最高值）
    ]   
    cmap = LinearSegmentedColormap.from_list("custom_cmap", colors)
    # 自定义横坐标标签
    xtick_labels = ["Level1", "Level2", "Level3", "Level4", "Level5"]  # 每列的标签
    ytick_labels = ["Top1","Top2","Top3","Top4","Top5","Top10"]
    # 绘制每个热力图
    sns.heatmap(data1, ax=axes[0], vmin=vmin, vmax=vmax, cbar=False, annot=True, fmt=".2f", cmap=cmap, xticklabels=xtick_labels,yticklabels = ytick_labels)
    axes[0].set_title("gpt3-5-turbo")
    axes[0].tick_params(axis='both', which='both', length=0)
    
    sns.heatmap(data2, ax=axes[1], vmin=vmin, vmax=vmax, cbar=False, annot=True, fmt=".2f", cmap=cmap, xticklabels=xtick_labels,yticklabels = ytick_labels)
    axes[1].set_title("gpt-4o")
    axes[1].tick_params(axis='both', which='both', length=0)

    sns.heatmap(data3, ax=axes[2], vmin=vmin, vmax=vmax, cbar=False, annot=True, fmt=".2f", cmap=cmap, xticklabels=xtick_labels,yticklabels = ytick_labels)
    axes[2].set_title("o1-mini")
    axes[2].tick_params(axis='both', which='both', length=0)

    sns.heatmap(data4, ax=axes[3], vmin=vmin, vmax=vmax, cbar=True, annot=True, fmt=".2f", cmap=cmap, cbar_kws={'label': ''}, xticklabels=xtick_labels,yticklabels = ytick_labels)
    axes[3].set_title("o1-preview")
    axes[3].tick_params(axis='both', which='both', length=0)

    # 调整子图之间的间距
    plt.subplots_adjust(wspace=0.1)  # 增加水平间距

    # 保存热力图到文件
    plt.savefig(output_path, dpi=300, bbox_inches='tight')

    # 关闭画布
    plt.close()

    print(f"四个热力图已保存为 {output_path}")

def analyze_BugT(experiment_index, model_name, rangeIndex,root_path,havelegend):
    # 样例数据
    data = {}
    # 读取文件
    rawdata = ""
    path = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/BugT/difficultylist_"+model_name+".txt"
    with open(path, 'r', encoding='utf-8') as file:
        rawdata = file.read()
    rawdata = "{"+rawdata+"}"
    print(rawdata)
    data = ast.literal_eval(rawdata)
    # 获取所有TopN集合的并集
    all_values = set(data['Top1']) |set(data['Top2']) | set(data['Top3']) |set(data['Top4']) | set(data['Top5']) | set(data['Top10'])
    alldifficultylist = [68,194,104,129,9]
    # 将并集中的元素按升序排列，方便划分
    x_values = sorted(all_values)

    # 划分为7个难度区间
    num_splits = 5
    min_value = 400
    max_value = 2000

    # 根据数值范围划分难度区间
    intervals = np.linspace(min_value, max_value, num_splits + 1)

    # 每个区间内的数据
    intervals_labels = [f'{int(intervals[i])}-{int(intervals[i + 1])}' for i in range(num_splits)]

    # 初始化统计结果
    counts_per_interval = np.zeros((num_splits, 6))  # 4列对应Top1, Top3, Top5, Top10的计数

    # 统计每个区间内的元素在Top1, Top3, Top5, Top10中的出现次数
    for x in x_values:
        # 确定当前元素属于哪个区间
        interval_idx = np.digitize(x, intervals) - 1  # 获取区间索引

        # 如果 x == max_value，确保它落在最后一个区间
        if interval_idx == num_splits:
            interval_idx = num_splits - 1
        
        # 统计当前元素在各个TopN列表中的出现次数
        counts_per_interval[interval_idx, 0] += data['Top1'].count(x)
        counts_per_interval[interval_idx, 1] += data['Top2'].count(x)
        counts_per_interval[interval_idx, 2] += data['Top3'].count(x)
        counts_per_interval[interval_idx, 3] += data['Top4'].count(x)
        counts_per_interval[interval_idx, 4] += data['Top5'].count(x)
        counts_per_interval[interval_idx, 5] += data['Top10'].count(x)    
    counts_per_interval = counts_per_interval.T
    # 将二维数组转换为 NumPy 数组以便于操作
    counts_per_interval = np.array(counts_per_interval)
    alldifficultylist = np.array(alldifficultylist)

    # 初始化结果数组
    result = np.zeros_like(counts_per_interval)

    # 遍历二维数组的每个子数组，并与 alldifficultylist 进行逐行相除
    for i in range(counts_per_interval.shape[0]):  # 遍历每个二维子数组
        for j in range(counts_per_interval.shape[1]):  # 遍历每个子数组的行
            result[i, j] = np.round(counts_per_interval[i, j] / alldifficultylist[j], 2)
    # for i in range(counts_per_interval.shape[0]):  # 遍历每个二维子数组
    #     for j in range(counts_per_interval.shape[1]):  # 遍历每个子数组的行
    #         # 逐行相除并保留两位小数
    #         result[i, j] = "{:.2f}".format(counts_per_interval[i, j] / alldifficultylist[j])

    # 输出结果
    return result


def analyze_Condefects(experiment_index, model_name, rangeIndex,root_path):
  # 样例数据
    path = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/Condefects/difficultylist_"+model_name+".txt"
    data = {}
    # 读取文件
    rawdata = ""
    with open(path, 'r', encoding='utf-8') as file:
        rawdata = file.read()
    rawdata = "{"+rawdata+"}"
    print(rawdata)
    alldifficultylist = [425,32,30,12,4]
    data = ast.literal_eval(rawdata)
    # 获取所有TopN集合的并集
    all_values = set(data['Top1']) | set(data['Top2']) |set(data['Top3']) | set(data['Top4']) |set(data['Top5']) | set(data['Top10'])

    # 将并集中的元素按升序排列，方便划分
    x_values = sorted(all_values)

    # 划分为7个难度区间
    num_splits = 5
    min_value = 5
    max_value = 2121

    # 根据数值范围划分难度区间
    intervals = np.linspace(min_value, max_value, num_splits + 1)

    # 每个区间内的数据
    intervals_labels = [f'{int(intervals[i])}-{int(intervals[i + 1])}' for i in range(num_splits)]
    
    # 初始化统计结果
    counts_per_interval = np.zeros((num_splits, 6))  # 4列对应Top1, Top3, Top5, Top10的计数

    # 统计每个区间内的元素在Top1, Top3, Top5, Top10中的出现次数
    for x in x_values:
        # 确定当前元素属于哪个区间
        interval_idx = np.digitize(x, intervals) - 1  # 获取区间索引

        # 如果 x == max_value，确保它落在最后一个区间
        if interval_idx == num_splits:
            interval_idx = num_splits - 1
        
        # 统计当前元素在各个TopN列表中的出现次数
        counts_per_interval[interval_idx, 0] += data['Top1'].count(x)
        counts_per_interval[interval_idx, 1] += data['Top2'].count(x)
        counts_per_interval[interval_idx, 2] += data['Top3'].count(x)
        counts_per_interval[interval_idx, 3] += data['Top4'].count(x)
        counts_per_interval[interval_idx, 4] += data['Top5'].count(x)
        counts_per_interval[interval_idx, 5] += data['Top10'].count(x)
    counts_per_interval = counts_per_interval.T
    # 将二维数组转换为 NumPy 数组以便于操作
    counts_per_interval = np.array(counts_per_interval)
    alldifficultylist = np.array(alldifficultylist)

    # 初始化结果数组
    result = np.zeros_like(counts_per_interval)

    # 遍历二维数组的每个子数组，并与 alldifficultylist 进行逐行相除
    for i in range(counts_per_interval.shape[0]):  # 遍历每个二维子数组
        for j in range(counts_per_interval.shape[1]):  # 遍历每个子数组的行
            result[i, j] = np.round(counts_per_interval[i, j] / alldifficultylist[j], 2)
    # for i in range(counts_per_interval.shape[0]):  # 遍历每个二维子数组
    #     for j in range(counts_per_interval.shape[1]):  # 遍历每个子数组的行
    #         # 逐行相除并保留两位小数
    #         result[i, j] = "{:.2f}".format(counts_per_interval[i, j] / alldifficultylist[j])

    # 输出结果
    return result


def analyze_Codeflaws(prompt,experiment_index,experiment_model,rangeIndex,root_path):
    # 样例数据
    path = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/Codeflaws/difficultylist_"+experiment_model+".txt"
    data = {}
    # 读取文件
    rawdata = ""
    with open(path, 'r', encoding='utf-8') as file:
        rawdata = file.read()
    rawdata = "{"+rawdata+"}"
    # print(rawdata)
    data = ast.literal_eval(rawdata)
    # 获取所有TopN集合的并集
    all_values = set(data['Top1']) | set(data['Top2']) |set(data['Top3']) | set(data['Top4']) |set(data['Top5']) | set(data['Top10'])

    # 将并集中的元素按升序排列，方便划分
    x_values = sorted(all_values)

    # 划分为7个难度区间
    num_splits = 5
    min_value = 800
    max_value = 2500

    # 根据数值范围划分难度区间
    intervals = np.linspace(min_value, max_value, num_splits + 1)

    # 每个区间内的数据
    intervals_labels = [f'{int(intervals[i])}-{int(intervals[i + 1])}' for i in range(num_splits)]


    alldifficultylist = [235,121,93,23,8]
    # 初始化统计结果
    counts_per_interval = np.zeros((num_splits, 6))  # 4列对应Top1, Top3, Top5, Top10的计数

    # 统计每个区间内的元素在Top1, Top3, Top5, Top10中的出现次数
    for x in x_values:
        # 确定当前元素属于哪个区间
        interval_idx = np.digitize(x, intervals) - 1  # 获取区间索引

        # 如果 x == max_value，确保它落在最后一个区间
        if interval_idx == num_splits:
            interval_idx = num_splits - 1
        
        # 统计当前元素在各个TopN列表中的出现次数
        counts_per_interval[interval_idx, 0] += data['Top1'].count(x)
        counts_per_interval[interval_idx, 1] += data['Top2'].count(x)
        counts_per_interval[interval_idx, 2] += data['Top3'].count(x)
        counts_per_interval[interval_idx, 3] += data['Top4'].count(x)
        counts_per_interval[interval_idx, 4] += data['Top5'].count(x)
        counts_per_interval[interval_idx, 5] += data['Top10'].count(x)
    counts_per_interval = counts_per_interval.T
    # 将二维数组转换为 NumPy 数组以便于操作
    counts_per_interval = np.array(counts_per_interval)
    alldifficultylist = np.array(alldifficultylist)

    # 初始化结果数组
    result = np.zeros_like(counts_per_interval)

    # 遍历二维数组的每个子数组，并与 alldifficultylist 进行逐行相除
    for i in range(counts_per_interval.shape[0]):  # 遍历每个二维子数组
        for j in range(counts_per_interval.shape[1]):  # 遍历每个子数组的行
            result[i, j] = np.round(counts_per_interval[i, j] / alldifficultylist[j], 2)
    # for i in range(counts_per_interval.shape[0]):  # 遍历每个二维子数组
    #     for j in range(counts_per_interval.shape[1]):  # 遍历每个子数组的行
    #         # 逐行相除并保留两位小数
    #         result[i, j] = "{:.2f}".format(counts_per_interval[i, j] / alldifficultylist[j])

    # 输出结果
    return result
        



if __name__ == "__main__":

     # 画codeflaws上的
    root_path = "/home/xuhexiang/data/codeflaws/version"
    ans_o1preview = analyze_Codeflaws("prompt", 1, "o1-preview", 503,root_path)
    ans_mini = analyze_Codeflaws("prompt", 1, "o1-mini", 503,root_path)
    ans_gpt4o = analyze_Codeflaws("prompt", 1, "gpt-4o", 503,root_path)
    ans_gpt3_5 = analyze_Codeflaws("prompt", 1, "gpt-3.5-turbo", 503,root_path)
    generate_heatmaps(ans_gpt3_5, ans_gpt4o, ans_mini, ans_o1preview, "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/heatmap_codeflaws.png")
    print("over")

    # 画condefects上的
    root_path = "/home/xuhexiang/data/ConDefects-main/Code"
    ans_o1preview = analyze_Condefects( 1, "o1-preview", 503, root_path)
    ans_mini = analyze_Condefects( 1, "o1-mini", 503, root_path)
    ans_gpt4o = analyze_Condefects( 1, "gpt-4o", 503, root_path)
    ans_gpt3_5 = analyze_Condefects( 1, "gpt-3.5-turbo", 503, root_path)
    generate_heatmaps(ans_gpt3_5, ans_gpt4o, ans_mini, ans_o1preview, "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/heatmap_condefects.png")
    print("over")

    #画BugT上的
    root_path = "/home/xuhexiang/data/BugT/Code"
    ans_mini = analyze_BugT( 6, "o1-mini", 503, root_path,False)
    ans_o1preview = analyze_BugT( 6, "o1-preview", 503, root_path,False)
    ans_gpt4o = analyze_BugT( 6, "gpt-4o", 503, root_path,False)
    ans_gpt3_5 = analyze_BugT( 6, "gpt-3.5-turbo", 503, root_path,True)
    generate_heatmaps(ans_gpt3_5, ans_gpt4o, ans_mini, ans_o1preview, "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/heatmap_bugt.png")
    print("over")  