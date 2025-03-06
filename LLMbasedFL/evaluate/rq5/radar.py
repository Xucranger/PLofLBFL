import plotly.graph_objects as go

# 指标和数据
labels = ["Readability", "Usefulness", "Conciseness", "Relevance", "Accuracy"]
values_ds = [20.27/5, 20/5, 24.87/5, 20.7/5, 24.53/5]
values_o1 = [12.8/5, 12.63/5, 19.77/5, 12.43/5, 12.8/5]

# 关闭雷达图自动闭合
values_ds.append(values_ds[0])
values_o1.append(values_o1[0])
labels.append(labels[0])

# 创建雷达图
fig = go.Figure()

fig.add_trace(go.Scatterpolar(
    r=values_ds,
    theta=labels,
    fill='toself',
    name='DeepSeekV3',
    line=dict(color='rgb(142, 45, 48)')
))

fig.add_trace(go.Scatterpolar(
    r=values_o1,
    theta=labels,
    fill='toself',
    name='o1-preview',
    line=dict(color='rgb(93, 116, 162)')
))


# 添加标注，调整 o1-preview 的标注位置避免重叠
for i, label in enumerate(labels[:-1]):  # 避免重复标注第一个点
    fig.add_trace(go.Scatterpolar(
        r=[values_ds[i] * 0.9],  # 调整 DeepSeekV3 标注位置使其在雷达图内部
        theta=[label],
        mode='text',
        text=[f"{values_ds[i]:.2f}"],
        textfont=dict(size=20),
        textposition='middle center',
        showlegend=False
    ))
    fig.add_trace(go.Scatterpolar(
        r=[values_o1[i] * 0.8],  # 调整 o1-preview 标注位置，使其更靠近中心避免重叠
        theta=[label],
        mode='text',
        text=[f"{values_o1[i]:.2f}"],
        textfont=dict(size=20),
        textposition='middle center',
        showlegend=False
    ))

# 设置图表布局
fig.update_layout(
    width=1000,  # 宽度（默认单位是像素）
    height=900,  # 高度
    font=dict(family="Times New Roman", size=30),
    polar=dict(
        bgcolor='rgba(196, 216, 242, 0.3)',  # 蓝色背景填充
        radialaxis=dict(visible=True, range=[0, 5], dtick=1,angle=30)
    ),
    showlegend=True,
    legend=dict(
        x=0.5,  # 水平方向居中
        y=1.1,  # 位于图表上方
        xanchor='center',
        yanchor='bottom'
    )
)

# 保存和显示
fig.write_image("radar_chart.pdf")
