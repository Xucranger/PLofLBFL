import matplotlib.pyplot as plt
from matplotlib import rcParams
import numpy as np

# 设置字体
config = {
    "font.family": 'Times New Roman',
    "mathtext.fontset": 'stix',
    "font.serif": ['SimSun'],
}
rcParams.update(config)

# 定义颜色
color1 = (51/255, 57/255, 91/255)  # 红色
color2 = (93/255, 116/255, 162/255)  # 绿色
color3 = (196/255, 216/255, 242/255)  # 蓝色

# 类别
categories = ['Full', 'w/o CoT', 'w/o Itent', 'w/o Novice', 'w/o Reason', 'w/o Sort']
# 三组数据
# Condefects
condefects_top1 = np.array([9, 7, 9, 2, 5, 8])
condefects_top3 = np.array([19, 14, 19, 8, 19, 17])
condefects_top5 = np.array([24, 17, 27, 16, 21, 21])

# Codeflaws
top_1_cf = np.array([7, 6, 7, 4, 7, 3]) 
top_3_cf = np.array([21, 14, 19, 13, 16, 14]) 
top_5_cf = np.array([27, 19, 26, 20, 23, 24]) 

# BugT
top_1_bt = np.array([13, 12, 12, 8, 10, 12])
top_3_bt = np.array([19, 14, 19, 16, 18, 17])
top_5_bt = np.array([29, 18, 19, 20, 21, 27])

# X 轴位置
ind = np.arange(len(categories))
width = 0.25

# 创建 1 行 3 列的子图
fig, ax = plt.subplots(1, 3, figsize=(48, 10))

datasets = [(condefects_top1, condefects_top3, condefects_top5, "Condefects"),
            (top_1_cf, top_3_cf, top_5_cf, "Codeflaws"),
            (top_1_bt, top_3_bt, top_5_bt, "BugT")]

for i, (top_1, top_3, top_5, xlabel) in enumerate(datasets):
    ax[i].bar(ind - width, top_1, width, label='Top-1', color=color1, edgecolor='black', linewidth=2)
    ax[i].bar(ind, top_3, width, label='Top-3', color=color2, edgecolor='black', linewidth=2)
    ax[i].bar(ind + width, top_5, width, label='Top-5', color=color3, edgecolor='black', linewidth=2)
    
    ax[i].set_xlabel(xlabel, fontsize=34)
    ax[i].set_xticks(ind)
    ax[i].set_xticklabels(categories, fontsize=30)
    ax[i].tick_params(axis='y', labelsize=30, width=2)
    ax[i].tick_params(axis='x', width=2)
    ax[i].yaxis.grid(True, linestyle='--', linewidth=0.5, color='gray')
    ax[i].spines['bottom'].set_linewidth(2)
    ax[i].spines['left'].set_linewidth(2)
    ax[i].spines['right'].set_linewidth(2)
    ax[i].spines['top'].set_linewidth(2)
    ax[i].set_ylim(0, max(top_1.max(), top_3.max(), top_5.max()) * 1.1)
    
    # 在柱状图上方添加标签
    def autolabel(rects):
        for rect in rects:
            height = rect.get_height()
            ax[i].annotate('{}'.format(height),
                           xy=(rect.get_x() + rect.get_width() / 2, height),
                           xytext=(0, 3),
                           textcoords="offset points",
                           ha='center', va='bottom', fontsize=30)
    
    autolabel(ax[i].containers[0])  # Top-1
    autolabel(ax[i].containers[1])  # Top-3
    autolabel(ax[i].containers[2])  # Top-5

# 调整布局
plt.subplots_adjust(top=0.85, bottom=0.12)
plt.tight_layout()

# 保存图像
plt.savefig("/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq3/promptvarious_gpt4.pdf")
# plt.show()
