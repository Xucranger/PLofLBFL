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
    ax.set_xticklabels([f'Group {i+1}' for i in range(num_groups)])
    ax.set_yticks(categories)
    ax.set_yticklabels([f'Difficulty {i}' for i in categories])

    # 设置标题
    ax.set_title('3D Bar Chart of Accuracy for Different Groups and Difficulties')

    plt.savefig("/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq4/11.pdf")

# 示例数据：五组的准确率数据（每组的准确率）
sorted_questions = [
    [0.1, 0.2, 0.3, 0.4, 0.5],  # Group 1
    [0.15, 0.25, 0.35, 0.45, 0.55],  # Group 2
    [0.2, 0.3, 0.4, 0.5, 0.6],  # Group 3
    [0.05, 0.15, 0.25, 0.35, 0.45],  # Group 4
    [0.3, 0.4, 0.5, 0.6, 0.7],  # Group 5
]

plot_3d_bar_chart(sorted_questions)
