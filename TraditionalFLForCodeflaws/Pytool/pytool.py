import re
import shutil
import subprocess
import sys
import os
import threading

import psutil as psutil

import util

# import OJexperiment.util as util

if sys.platform == "linux":
    COMLINE_COV_PY = "timeout 5 coverage run --rcfile=%s %s"
    COMLINE_RUN_PY = "timeout 5 python3 %s >%s "

    COMLINE_COV_PY2 = "timeout 5 coverage2 run --rcfile=%s %s <%s"
    COMLINE_RUN_PY2 = "timeout 5 python2 %s <%s >%s "
else:
    COMLINE_COV_PY = "coverage3 run --rcfile=%s %s"
    COMLINE_RUN_PY = "python3 %s >%s "

    COMLINE_COV_PY2 = "coverage2 run --rcfile=%s %s <%s"
    COMLINE_RUN_PY2 = "python2 %s <%s >%s "

def run_command_with_timeout(cmd, timeout_sec):
    """在给定的超时时间内运行命令，如果命令超过设定的时间则杀死进程"""
    timer = None
    try:
        # 创建一个 Popen 对象
        process = subprocess.Popen(cmd, shell=True)

        # 创建一个 Timer 对象
        timer = threading.Timer(timeout_sec, kill_proc_tree, args=[process.pid])

        timer.start()
        stdout, stderr = process.communicate()

    except Exception as ex:
        print(ex)
    finally:
        timer.cancel()

    return process.returncode, stdout, stderr

def kill_proc_tree(pid, including_parent=True):
    parent = psutil.Process(pid)
    children = parent.children(recursive=True)
    for child in children:
        child.kill()
    if including_parent:
        parent.kill()

def getSrcCov_PY(prename, srcPath, testDataPathDir, sourcelist):
    cov_info = []
    res = []
    testDataPathDir = os.path.join(testDataPathDir, 'in')
    files = os.listdir(testDataPathDir)
    runFailFlag = False

    for i in files:
        try:
            cmd = "cd " + util.rootRunPath + " && javac "+os.path.join(util.rootRunPath, prename)
            os.system(cmd)

            if os.path.exists("report"):
                shutil.rmtree("report")

            if os.path.exists("jacoco.exec"):
                os.remove("jacoco.exec")
            if os.path.exists("Main.class"):
                os.remove("Main.class")
            if os.path.exists("Main.java"):
                os.remove("Main.java")
            shutil.copy(os.path.join(util.rootRunPath, "Main.class"), "Main.class")
            shutil.copy(os.path.join(util.rootRunPath, "Main.java"), "Main.java")

            if os.path.exists(os.path.join(util.rootRunPath, "Main.out")):
                os.remove(os.path.join(util.rootRunPath, "Main.out"))

            cmd="cd " + util.rootRunPath + " && java -javaagent:"+os.path.join(util.rootLibPath,"jacocoagent.jar")+"=destfile=jacoco.exec Main < "+\
                os.path.join(testDataPathDir, i)+"> "+os.path.join(util.rootRunPath, "Main.out")

            returncode, stdout, stderr = run_command_with_timeout(cmd, timeout_sec=5)
            if returncode != 0:
                print(srcPath,f"命令运行失败，错误代码：{returncode}")
                runFailFlag = True
                break
            else:
                print(srcPath,"命令运行成功。")

            cmd="cd " + util.rootRunPath + " && java -jar "+os.path.join(util.rootLibPath,"jacococli.jar")+\
                " report jacoco.exec --classfiles . --sourcefiles . --html report"
            os.system(cmd)

            with open(os.path.join(util.rootRunPath, "report","default","Main.java.html"), "r") as f:
                html = f.read()
            with open(os.path.join(util.rootRunPath, "report", "default", "Main.java.html"), "r") as f:
                htmlLines=f.readlines()
            coverList = util.get_coverage(html,htmlLines)
            subs = []
            for index in range(len(coverList)):
                if coverList[index] == 1:
                    subs.append(index+1)

            cov_info.append(subs)
        except:
            cov_info.append([])

        j=i.replace("in","out")
        res.append(util.compare_res(os.path.join(util.rootRunPath, "Main.out"), os.path.join(testDataPathDir, j)))

    if runFailFlag:
        return None, None
    return cov_info, res


def SBFLwork_PY(prename, tempfile, testDataPath, source):
    newfile = os.path.join(util.rootRunPath, prename)
    util.write_file(newfile, util.read_line(tempfile))
    cov, res = getSrcCov_PY(prename, newfile, testDataPath, source)
    return cov, res



def getSrcCovWithOrder(prename,srcPath, testDataPathDir, outputDir):
    cov_info = []
    res = []
    testDataPathDir = os.path.join(testDataPathDir, 'in')
    files = os.listdir(testDataPathDir)
    runFailFlag = False
    fileoutorder= []
    #clean outputDir
    if os.path.exists(outputDir):
        fileList = os.listdir(outputDir)
        for f in fileList:
            os.remove(os.path.join(outputDir,f))

    for i in files:
        try:
            cmd = "cd " + util.rootRunPath + " && javac "+os.path.join(util.rootRunPath, prename)
            os.system(cmd)

            if os.path.exists("report"):
                shutil.rmtree("report")

            if os.path.exists("jacoco.exec"):
                os.remove("jacoco.exec")
            if os.path.exists("Main.class"):
                os.remove("Main.class")
            if os.path.exists("Main.java"):
                os.remove("Main.java")
            shutil.copy(os.path.join(util.rootRunPath, "Main.class"), "Main.class")
            shutil.copy(os.path.join(util.rootRunPath, "Main.java"), "Main.java")

            if os.path.exists(os.path.join(util.rootRunPath, "Main.out")):
                os.remove(os.path.join(util.rootRunPath, "Main.out"))

            cmd="cd " + util.rootRunPath + " && java -javaagent:"+os.path.join(util.rootLibPath,"jacocoagent.jar")+"=destfile=jacoco.exec Main < "+\
                os.path.join(testDataPathDir, i)+"> "+os.path.join(util.rootRunPath, "Main.out")

            returncode, stdout, stderr = run_command_with_timeout(cmd, timeout_sec=5)
            if returncode != 0:
                print(srcPath,f"命令运行失败，错误代码：{returncode}")
                runFailFlag = True
                break
            else:
                print(srcPath,"命令运行成功。")

            cmd="cd " + util.rootRunPath + " && java -jar "+os.path.join(util.rootLibPath,"jacococli.jar")+\
                " report jacoco.exec --classfiles . --sourcefiles . --html report"
            os.system(cmd)

            with open(os.path.join(util.rootRunPath, "report","default","Main.java.html"), "r") as f:
                html = f.read()
            with open(os.path.join(util.rootRunPath, "report", "default", "Main.java.html"), "r") as f:
                htmlLines=f.readlines()
            coverList = util.get_coverage(html,htmlLines)
            subs = []
            for index in range(len(coverList)):
                if coverList[index] == 1:
                    subs.append(index+1)

            cov_info.append(subs)
        except:
            cov_info.append([])

        j=i.replace("in","out")
        fileoutorder.append(j)
        res.append(util.compare_res(os.path.join(util.rootRunPath, "Main.out"), os.path.join(testDataPathDir, j)))
        shutil.copy(os.path.join(util.rootRunPath, "Main.out"), os.path.join(outputDir, j))

    if runFailFlag:
        return None, None, None
    return cov_info, res,fileoutorder


def MBFLwork_PY(prename, srcPath, testDataPathDir, outputDir):
    cov, res, order = getSrcCovWithOrder(prename,srcPath, testDataPathDir, outputDir)
    return cov, res, order


