# coding=utf-8

import py_compile
import sys
import os
import re


rootSourcePath = r"/home/shizhengyanjiu/Codeflaws/Code"
rootTestPath = r"/home/shizhengyanjiu/Codeflaws/Code"
rootRunPath = r"/home/shizhengyanjiu/Codeflaws/Run"
rootLibPath = r"/home/shizhengyanjiu/Codeflaws/Lib"
rootResultPath = r"/home/shizhengyanjiu/Codeflaws/Result"


# rootSourcePath = r"D:\Defects4JFile\OJNLInformationNewStudent"
# rootTestPath = r"D:\Defects4JFile\OJTestCase"
# rootRunPath = r"D:\Defects4JFile\jacocotest"
# rootLibPath = r"D:\Defects4JFile\jacocolib"
# rootResultPath = r"D:\Defects4JFile\OJResultPath"

# rootPath = r"D:\work\NAS-我的工作\18-实证研究\Codeflaws\Run"
rootPath = "/home/shizhengyanjiu/Codeflaws/Run"



if sys.platform == "linux":
    COMLINE_COMPILE = "timeout 5 g++ -c %s"

else:
    COMLINE_COMPILE = "g++ -c %s >clearscreen.txt"

def save_result_with_granularity(granularity, logFilePath, method, sus, formular_name):
    methodDir = os.path.join("Susresult", method)
    granularityDir = os.path.join(methodDir, str(granularity))
    ok = os.path.exists(granularityDir)
    if not ok:
        os.makedirs(granularityDir)
    tempfile = os.path.join(granularityDir, logFilePath + ".txt")
    lineNum = len(sus)
    with open(tempfile, 'a+', encoding='utf-8') as f:
        f.write(formular_name)
        for index in range(1, lineNum + 1):
            f.write(" " + str(sus[index]))
        f.write("\n")


def clean_code(filepath):
    list = read_line(filepath)
    newlist = []
    for i in list:
        if re.match("^\s*$", i):
            pass
        else:
            newlist.append(i)
    write_file(filepath, newlist)


def write_file(file_name, list):
    try:
        with open(file_name, 'w', encoding='utf-8',errors='ignore') as f:
            f.writelines([str(line) + '\n' for line in list])

    except:
        print("写入" + file_name + "出错")


def write_file_add(file_name, list):
    try:
        with open(file_name, 'a+', encoding='utf-8',errors='ignore') as f:
            f.writelines([str(line) + '\n' for line in list])
    except:
        print("写入" + file_name + "出错")


def compare_res(user_res, correct_res):
    flag = True
    try:
        if not os.path.exists(user_res):
            return False
        user_res_text = read_line(user_res)
        correct_res_text = read_line(correct_res)

        if len(user_res_text) != len(correct_res_text):
            flag = False
        if flag:
            for i in range(len(correct_res_text)):
                if user_res_text[i] != correct_res_text[i]:
                    flag = False
    except Exception as ex:
        flag = False
    return flag


def read_line(file_name):
    try:
        with open(file_name, 'r', encoding='utf-8',errors='ignore') as f:
            text = f.read().splitlines()
        return text
    except Exception as e:
        print("读取" + file_name + "出错")
        print(e)


def compileCfile(FilePath):
    if sys.platform == "linux":
        resjudge = os.path.join(rootRunPath, "a.out")
    else:
        resjudge = os.path.join(rootRunPath, "a.exe")
    if os.path.exists(resjudge):
        os.remove(resjudge)
    
    cmd = "cd " + rootRunPath + " && chmod 777 *"
    os.system(cmd)

    cmd = "cd " + rootRunPath + " && gcc "+(FilePath)
    flag = False
    try:
        os.system(cmd)
        flag = os.path.exists(resjudge)
        if flag:
            os.remove(resjudge)
    except:
        print(FilePath + "编译错误")
    return flag


def CheckPyCompile(file):
    sourcelist = read_line(file)
    python3 = True
    for source in sourcelist:
        if "print " in source:
            python3 = False
            break
    if not python3:
        return True

    data = py_compile.compile(file)
    if data:
        return True
    else:
        print("编译错误")
        return False


def CheckCompile(file):
    if ".py" in file:
        return CheckPyCompile(file)
    else:
        return compileCfile(file)


def logInfo(path, content):
    logfile = path
    with open(logfile, 'a+', encoding='utf-8') as f:
        f.write(content + "\n")


def myencode(f1, f2):
    src1 = read_line(f1)
    src2 = read_line(f2)
    dir = {}
    cnt = 0
    list1 = []
    list2 = []
    x1 = 0
    x2 = 0
    for i in src1:
        if i not in dir.keys():
            dir[i] = str(cnt)
            cnt += 1
        list1.append(dir[i])
    x1 = cnt
    for i in src2:
        if i not in dir.keys():
            dir[i] = str(cnt)
            cnt += 1
        list2.append(dir[i])
    x2 = cnt - x1
    return dir, list1, list2, x1, x2


def get_coverage(html,htmlLines):
    # Adjusted regular expression to also match "bfc"
    pattern = re.compile(r'<span class="([ a-z]*?)" id="L(\d+)"')

    # Find all matches
    matches = pattern.findall(html)

    # Maximum line number
    max_line = len(htmlLines)-1

    # Create a list to represent coverage status for each line
    coverage_list = [0] * max_line

    for status, line_num in matches:
        if "fc" in status or "pc" in status:
            coverage_list[int(line_num)-1] = 1
        elif "nc" in status:
            pass
        else:
            print("Error: Unknown status: " + status)

    return coverage_list