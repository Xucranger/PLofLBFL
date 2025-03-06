import sys
import os
# import OJexperiment.util as util
import util

if sys.platform == "linux":
    COMLINE_COMPILE_C = "timeout 1 g++ -fprofile-arcs -ftest-coverage %s -o %s"
    COMLINE_RUN_C = "timeout 1 %s <%s >%s"
    COMLINE_GCOV_C = "timeout 1 gcov %s"
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
        #非常重要，去掉gcov的覆盖
        cleanPart(prename)
        input_file = os.path.join(testDataPathDir, i)
        output_file = os.path.join(testDataPathDir.replace("input", "output"), i.replace("input", "output"))
        programout_file = os.path.join(util.rootPath, prename + ".out")
        try:

            cmd = "cd " + util.rootRunPath + " && chmod 777 *"
            os.system(cmd)

            cmd = COMLINE_RUN_C % (compilefile, input_file, programout_file)
            os.system(cmd)
            print("cmd1 = ", cmd)
            # print()
            
            cmd =COMLINE_GCOV_C % (newfile)
            os.system(cmd)
            print("cmd2 = ",cmd)
            # print()
            # if "v82" in input_file:
            #     input("等")


            coverageLines = util.read_line(os.path.join(util.rootPath, prename + ".gcov"))
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
        except Exception as e:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            line_number = exc_tb.tb_lineno
            print(f'Error at line {line_number}: {e}')
            res.append([False])
            cov_info.append([])
    return cov_info, res


def compileCfile(newfile, compilefile):
    
    cmd = "chmod 777 *"
    os.chdir(util.rootRunPath)
    os.system(cmd)

    cmd = COMLINE_COMPILE_C % (newfile, compilefile)
    print(cmd)
    try:
        os.system(cmd)
    except:
        print(newfile + "编译错误")
        return False
    
    return True


def SBFLwork_C(prename, FilePath, testDataDirPath):

    newfile = os.path.join(util.rootPath, prename)
    util.write_file(newfile, util.read_line(FilePath))
    if sys.platform == "linux":
        compilefile = os.path.join(util.rootPath, prename.replace(".c", ""))
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
        # 非常重要，去掉gcov的覆盖
        cleanPart(prename)
        input_file = os.path.join(testDataPathDir, i)
        output_file = os.path.join(testDataPathDir.replace("input", "output"), i.replace("input", "output"))
        program_output_file = os.path.join(outputDir, i.replace("input", "output"))

        try:

            # cmd = "cd " + util.rootRunPath + " && chmod 777 *"
            # os.system(cmd)

            cmd =COMLINE_RUN_C % (compilefile, input_file, program_output_file)
            os.system(cmd)
            print("runcmd:"+cmd)
            if not (os.path.exists(os.path.join(util.rootPath, "Main.gcda")) and os.path.exists(
                    os.path.join(util.rootPath, "Main.gcno"))):
                RuntimeErrorFlag = True
                raise NameError("变异获取覆盖信息-运行出错") from Exception

            cmd = "cd " + util.rootRunPath + " && " + COMLINE_GCOV_C % (FilePath)
            os.system(cmd)
            coverageLines = util.read_line(os.path.join(util.rootPath,prename+".gcov"))
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
            file_order.append(i.replace("input", "output"))
        except Exception as ex:
            res.append([False])
            cov_info.append([])
            file_order.append(i.replace("input", "output"))
    return cov_info, res, file_order, RuntimeErrorFlag


def MBFLwork_C(prename, FilePath, testDataDirPath, outputDir):
    
    if sys.platform == "linux":
        compilefile = os.path.join(util.rootPath, prename.replace(".c", ""))
    else:
        compilefile = os.path.join(util.rootPath, prename + '.exe')
    if (compileCfile(FilePath, compilefile)):
        cov, res, order, RuntimeErrorFlag = getSrcCovWithOrder_C(prename, FilePath, compilefile, testDataDirPath,
                                                                 outputDir)
        # print(cov, res, order)
        return cov, res, order, RuntimeErrorFlag
    return [], [], []
