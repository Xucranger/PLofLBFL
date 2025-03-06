import matplotlib.pyplot as plt
import numpy as np
import matplotlib.pyplot as plt
from matplotlib import rcParams
import numpy as np
from matplotlib.backends.backend_pdf import PdfPages
# 模拟输入数据
# data = {
#     "ans_gpto1_preview": [90, 136, 180, 219, 253],
#     "ans_gpto1_mini":  [83, 141, 182, 232, 266, 381],
#     "ans_gpt4o": [101, 166, 213, 257, 287, 373],
#     "ans_gpt3_5": [100, 157, 194, 221, 240, 320]
# }

# data = {
#     "ans_gpto1_preview": [90, 136, 180, 219, 253],
#     "ans_gpto1_mini":  [83, 141, 182, 232, 266, 381],
#     "ans_gpt4o": [101, 166, 213, 257, 287, 373],
#     "ans_gpt3_5": [100, 157, 194, 221, 240, 320]
# }
# data = {
#     "ans_gpto1_preview": [90, 136, 180, 219, 253],
#     "ans_gpto1_mini":  [83, 141, 182, 232, 266, 381],
#     "ans_gpt4o": [101, 166, 213, 257, 287, 373],
#     "ans_gpt3_5": [100, 157, 194, 221, 240, 320]
# }

# # 提取X轴标签
# x_labels = ["Top 1", "Top 2", "Top 3", "Top 4", "Top 5"]

# # 绘图
# def plot_bars_and_lines(data):
#     x = np.arange(len(x_labels))  # X轴位置
#     bar_width = 0.2  # 柱宽
#     colors = ['b', 'g', 'r', 'c', 'm', 'y']  # 颜色
#     offset = -0.5 * bar_width * (len(data) - 1)  # 为多柱图设置偏移
    
#     plt.figure(figsize=(10, 6))

#     for i, (model, values) in enumerate(data.items()):
#         x_offset = x + offset + i * bar_width
#         # 绘制柱状图
#         plt.bar(x_offset, values, width=bar_width, label=model, color=colors[i % len(colors)], alpha=0.7)
#         # 绘制曲线
#         plt.plot(x_offset, values, marker='o', linestyle='-', color=colors[i % len(colors)], linewidth=2)

#     # 设置标题和标签
#     plt.title('Comparison of Models', fontsize=14)
#     plt.xlabel('Metrics', fontsize=12)
#     plt.ylabel('Values', fontsize=12)
#     plt.xticks(x, x_labels)  # 设置X轴刻度
#     plt.legend()
#     plt.grid(axis='y', linestyle='--', alpha=0.6)

#     plt.tight_layout()
#     plt.grid(True)
#     title = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/dataleakdata/allmodel_BugT.png"
#     plt.savefig(title, dpi=300, bbox_inches='tight')


# # 调用绘图函数
# plot_bars_and_lines(data)

config = {
    "font.family": 'Times New Roman',
    "mathtext.fontset": 'stix',
    "font.serif": ['SimSun'],
}
rcParams.update(config)
color1 = (51/255, 57/255, 91/255)  # 红色
color2  = (93/255, 116/255, 162/255)  # 绿色
color3 = (196/255, 216/255, 242/255)  # 蓝色
color4 = (242/255, 232/255, 227/255)  # 蓝色
# Categories
categories = ['Top1', 'Top2', 'Top3', 'Top4' ,'Top5']

# Data
# mytitle = 'Codeflaws_prompt_various.pdf'
# top_1 = np.array([13, 11, 8, 8, 10, 11])
# top_3 = np.array([24, 23, 21, 18, 20, 19])
# top_5 = np.array([33, 32, 31, 28, 28, 27])

# Codeflaws
mytitle = '/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq5/Codeflaws_various.pdf'
gpto1_preview = np.array([90, 136, 180, 219, 253])
gpto1_mini = np.array([83, 141, 182, 232, 266])
gpt4o = np.array([101, 166, 213, 257, 287])
gpt3_5 = np.array([100, 157, 194, 221, 240])
# Condefects
# mytitle = '/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq5/Condefects_various.pdf'
# gpto1_preview = np.array([258, 312, 344, 366, 378])
# gpto1_mini = np.array([211, 271, 306, 333, 348])
# gpt4o = np.array([213, 263, 310, 331, 360])
# gpt3_5 = np.array([148, 212, 248, 274, 290])
# BugT
# mytitle = '/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq5/BugT_various.pdf'
# gpto1_preview = np.array([242, 313, 365, 393, 413])
# gpto1_mini = np.array([204, 283, 329, 369, 407])
# gpt4o = np.array([177, 240, 288, 321, 358])
# gpt3_5 = np.array([133, 185, 223, 246, 278])
# X locations for the groups
ind = np.arange(len(categories))

# Bar width
width = 0.2

# Increase the figure size to make it wider
plt.figure(figsize=(16, 7))

# Create the subplot
ax = plt.subplot(111)


# Create bars
rects1 = ax.bar(ind - width, gpto1_preview, width, label='o1-preview', color=color1, edgecolor='black', linewidth=2)
rects2 = ax.bar(ind, gpto1_mini, width, label='o1-mini', color=color2, edgecolor='black', linewidth=2)
rects3 = ax.bar(ind + width, gpt4o, width, label='GPT-4o', color=color3, edgecolor='black', linewidth=2)
rects4 = ax.bar(ind + width*2, gpt3_5, width, label='GPT-35', color=color4, edgecolor='black', linewidth=2)

# Adjust the font sizes
label_size = 35  # size for x and y labels
title_size = 35  # size for the title
ticks_size = 35  # size for the x and y ticks
# Add some text for labels, title, and custom x-axis tick labels, etc.
ax.set_xlabel('', fontsize=35)
ax.set_ylabel('', fontsize=label_size)
# ax.set_title('Scores by category and top count', fontsize=title_size)
ax.set_xticks(ind)
ax.set_xticklabels(categories, fontsize=ticks_size)  # Rotate the category labels to prevent overlap
# ax.set_yticklabels(fontsize=ticks_size)
# 调整图表的布局，为图例留出空间
ax.legend(fontsize=ticks_size,loc='upper left')
ax.tick_params(axis='y', labelsize=ticks_size, width=2)  # 设置y轴刻度字体大小
ax.tick_params(axis='x', width=2)  # 加粗y轴刻度线
ax.yaxis.grid(True, linestyle='--', linewidth=0.5, color='gray')
ax.spines['bottom'].set_linewidth(2)  # 加粗x轴
ax.spines['left'].set_linewidth(2)    # 加粗y轴
ax.spines['right'].set_linewidth(2)    # 加粗y轴
ax.spines['top'].set_linewidth(2)    # 加粗y轴
# Function to attach a text label above each bar, displaying its height.
y_max = max(gpto1_preview.max(), gpto1_mini.max(), gpt4o.max(),gpt3_5.max())
dynamic_fontsize = max(10, min(30, int(y_max / 10)))
ax.set_ylim(0, y_max * 1.1)  # 为数字标签留出空间
def autolabel(rects):
    for rect in rects:
        height = rect.get_height()
        ax.annotate('{}'.format(height),
                    xy=(rect.get_x() + rect.get_width() / 2, height),
                    xytext=(0, 3),  # 3 points vertical offset
                    textcoords="offset points",
                    ha='center', va='bottom', fontsize=30)

# Call the function for each set of bars.
autolabel(rects1)
autolabel(rects2)
autolabel(rects3)
autolabel(rects4)

plt.subplots_adjust(top=0.90)  # 留出足够的空间给图例
# 显示图例，并指定位置在图表上方的中央
plt.legend(loc='upper center', bbox_to_anchor=(0.5, 1.14), ncol=len(categories), fontsize=ticks_size)
plt.tight_layout()  # Adjust the layout to fit everything


plt.savefig(mytitle)
# plt.show() 