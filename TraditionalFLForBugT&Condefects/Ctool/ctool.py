import sys
import os
import OJexperiment.util as util

if sys.platform == "linux":
    COMLINE_COMPILE_C = "timeout 5 g++ -fprofile-arcs -ftest-coverage %s -o %s"
    COMLINE_RUN_C = "timeout 5 %s <%s >%s"
    COMLINE_GCOV_C = "timeout 5 gcov %s"
else:
    COMLINE_COMPILE_C = "g++ -fprofile-arcs -ftest-coverage %s -o %s"
    COMLINE_RUN_C = "%s <%s >%s"
    COMLINE_GCOV_C = "gcov %s"

def cleanPart(prename):
    file1 = os.path.join(os.path.join(util.rootPath, prename+".gcda"))
    file2 = os.path.join(os.path.join(util.rootPath, prename+".c.gcov"))
    if os.path.exists(file1):
        os.remove(file1)
    if os.path.exists(file2):
        os.remove(file2)

def getSrcCov_C(prename, newfile, compilefile, testDataPathDir):
    cov_info = []
    res = []
    files = os.listdir(testDataPathDir)
    for i in files:
        if ".in" not in i:
            continue
        #非常重要，去掉gcov的覆盖
        cleanPart(prename)
        input_file = os.path.join(testDataPathDir, i)
        output_file = os.path.join(testDataPathDir, i[: -2] + "out")
        programout_file = os.path.join(util.rootPath, prename + ".out")
        try:
            cmd = COMLINE_RUN_C % (compilefile, input_file, programout_file)
            # print(cmd)
            os.system(cmd)
            cmd = COMLINE_GCOV_C % (newfile)
            # print(cmd)
            os.system(cmd)
            coverageLines = util.read_line(os.path.join(util.rootPath, prename + ".c.gcov"))
            tempcoverage = []
            for i in coverageLines:
                part = i.split(":")
                if part[0][-1] != '-' and part[0][-1] != '#':
                    pos = -1
                    while (part[1][pos] != ' '):
                        pos -= 1
                    tempcoverage.append(int(part[1][pos:]))
            res.append(util.compare_res(programout_file, output_file))
            cov_info.append(tempcoverage)
        except:
            res.append([False])
            cov_info.append([])
    return cov_info, res


def compileCfile(newfile, compilefile):
    cmd = COMLINE_COMPILE_C % (newfile, compilefile)
    try:
        os.system(cmd)
    except:
        print(newfile + "编译错误")
        return False
    return True


def SBFLwork_C(prename, FilePath, testDataDirPath):
    newfile = os.path.join(util.rootPath, prename + ".c")
    util.write_file(newfile, util.read_line(FilePath))
    if sys.platform == "linux":
        compilefile = os.path.join(util.rootPath, prename)
    else:
        compilefile = os.path.join(util.rootPath, prename + '.exe')
    if (compileCfile(newfile, compilefile)):
        cov, res = getSrcCov_C(prename, newfile, compilefile, testDataDirPath)
        return cov, res
    return [], []


def getSrcCovWithOrder_C(prename, FilePath, compilefile, testDataPathDir, outputDir):
    cov_info = []
    res = []
    file_order = []
    files = os.listdir(testDataPathDir)
    RuntimeErrorFlag = False
    for i in files:
        if ".in" not in i:
            continue
        # 非常重要，去掉gcov的覆盖
        cleanPart(prename)
        input_file = os.path.join(testDataPathDir, i)
        output_file = os.path.join(testDataPathDir, i[: -2] + "out")
        program_output_file = os.path.join(outputDir, i[: -2] + "out")
        try:
            cmd = COMLINE_RUN_C % (compilefile, input_file, program_output_file)
            os.system(cmd)

            if not (os.path.exists(os.path.join(util.rootPath, prename + ".gcda")) and os.path.exists(
                    os.path.join(util.rootPath, prename + ".gcno"))):
                RuntimeErrorFlag = True
                raise NameError("变异获取覆盖信息-运行出错") from Exception

            cmd = COMLINE_GCOV_C % (FilePath)
            os.system(cmd)
            coverageLines = util.read_line(os.path.join(util.rootPath,prename+".c.gcov"))
            tempcoverage = []
            for j in coverageLines:
                part = j.split(":")
                if part[0][-1] != '-' and part[0][-1] != '#':
                    pos = -1
                    while (part[1][pos] != ' '):
                        pos -= 1
                    tempcoverage.append(int(part[1][pos:]))
            res.append(util.compare_res(program_output_file, output_file))
            cov_info.append(tempcoverage)
            file_order.append(i[: -2] + "out")
        except:
            res.append([False])
            cov_info.append([])
            file_order.append(i[: -2] + "out")
    return cov_info, res, file_order, RuntimeErrorFlag


def MBFLwork_C(prename, FilePath, testDataDirPath, outputDir):
    if sys.platform == "linux":
        compilefile = os.path.join(util.rootPath, prename)
    else:
        compilefile = os.path.join(util.rootPath, prename + '.exe')
    if (compileCfile(FilePath, compilefile)):
        cov, res, order, RuntimeErrorFlag = getSrcCovWithOrder_C(prename, FilePath, compilefile, testDataDirPath,
                                                                 outputDir)
        # print(cov, res, order)
        return cov, res, order, RuntimeErrorFlag
    return [], [], []
