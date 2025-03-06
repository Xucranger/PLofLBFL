from PIL import Image, ImageDraw, ImageFont
import pandas as pd

def load_font(size, monospace=False):
    
    font_name = "/usr/share/fonts/times.ttf"
    return ImageFont.truetype(font_name, size)
    # except IOError:

    #     return ImageFont.load_default()

def wrap_text(text, font, max_width, draw):
    lines = text.split('\n')
    return lines

def draw_text(draw, text, position, font, color, max_width, highlight_line=None):
    lines = wrap_text(text, font, max_width, draw)
    y_offset = position[1]
    
    for i, line in enumerate(lines):
        line_color = "blue" if highlight_line is not None and i + 1 == highlight_line else color
        draw.text((position[0], y_offset), line, font=font, fill=line_color)
        bbox = draw.textbbox((position[0], y_offset), line, font=font)
        y_offset += (bbox[3] - bbox[1]) + 10  # 增加行间距，避免重叠
    return y_offset

def wrap_text_with_word_break(text, font, max_width, draw):
    lines = []
    current_line = ""
    newline = ""
    for char in text:
        test_line = current_line + char  # 尝试将字符加到当前行
        bbox = draw.textbbox((0, 0), test_line, font=font)
        
        if bbox[2] - bbox[0] <= max_width:  # 如果没有超出最大宽度
            current_line = test_line  # 继续添加字符
        else:
            if current_line:  # 如果当前行不为空，先保存当前行
                newline += current_line
                newline += '\n'
                lines.append(current_line)
            current_line = char  # 从当前字符开始新的一行
    
    if current_line:  # 添加最后一行（如果有的话）
        newline += current_line
        lines.append(current_line)
    
    return lines,newline

def generate_image(correct_code, faulty_code, reason, fault_location, output_path):
    font = load_font(30)  # 增大字体大小
    code_font = load_font(30, monospace=True)
    img_temp = Image.new("RGB", (1600, 1600), "white")  # 增加图片分辨率
    draw_temp = ImageDraw.Draw(img_temp)
    
    max_width = 700
    correct_lines = wrap_text(correct_code, code_font, max_width, draw_temp)
    faulty_lines = wrap_text(faulty_code, code_font, max_width, draw_temp)
    reason_lines,newline = wrap_text_with_word_break(reason, font, 1400, draw_temp)  # 使用新的换行函数
    
    max_lines = max(len(correct_lines), len(faulty_lines))
    bbox = draw_temp.textbbox((0, 0), "A", font=font)
    line_height = bbox[3] - bbox[1] + 10  # 增加行高
    
    height = 150 + max_lines * line_height + 50 + len(reason_lines) * line_height + 100
    img = Image.new("RGB", (1600, height), "white")
    draw = ImageDraw.Draw(img)
    
    draw_text(draw, "Correct Version", (100, 20), font, "black", max_width)
    draw_text(draw, "Faulty Version", (900, 20), font, "black", max_width)
    
    draw_text(draw, correct_code, (100, 80), code_font, "green", max_width, highlight_line=fault_location)
    draw_text(draw, faulty_code, (900, 80), code_font, "red", max_width, highlight_line=fault_location)
    
    reason_start_y = 150 + max_lines * line_height + 70
    draw_text(draw, "Reason: " + newline, (100, reason_start_y), font, "black", 1400)
    
    img.save(output_path)


def process_csv(csv_path, output_dir):
    df = pd.read_csv(csv_path)
    for index, row in df.iterrows():
        output_path = f"{output_dir}/comparison_{index}.png"
        fault_location = int(row['faultLocation']) if 'faultLocation' in row and not pd.isna(row['faultLocation']) else None
        generate_image(row['correctVersion'], row['faultyVersion'], row['reason'], fault_location, output_path)

csv_path = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq6/deepseekV3/filterList_ds.csv"
output_dir = "/home/xuhexiang/llmInNoviceProgramFL/CodeArrange/evaluate/rq6/deepseekV3/generated_images"
process_csv(csv_path, output_dir)