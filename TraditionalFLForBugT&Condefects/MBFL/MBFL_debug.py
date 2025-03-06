import os
import sys
import shutil
import OJexperiment.MBFL.MBFL_Formular as MBFL_Formular
import OJexperiment.util as util
import OJexperiment.Ctool.ctool as ctool
import OJexperiment.Cpptool.cpptool as cpptool
import OJexperiment.Pytool.pytool as pytool


def clean(mutateOutPutDir, programOutPutDir, prename):
    shutil.rmtree(mutateOutPutDir)
    shutil.rmtree(programOutPutDir)
    list = os.listdir(util.rootPath)
    for i in list:
        if ".coverage" in i:
            os.remove(os.path.join(util.rootPath, ".coverage"))
        if prename in i:
            os.remove(os.path.join(util.rootPath, i))


def getSrcCov(prename, srcPath, testDataPathDir, outputDir, language):
    cov_info = []
    res = []
    file_order = []
    RuntimeErrorFlag = False
    if language == "cpp":
        cov_info, res, file_order, RuntimeErrorFlag = cpptool.MBFLwork_CPP(prename, srcPath, testDataPathDir, outputDir)
    elif language == "c":
        cov_info, res, file_order, RuntimeErrorFlag = ctool.MBFLwork_C(prename, srcPath, testDataPathDir, outputDir)
    elif language == "py":
        cov_info, res, file_order = pytool.MBFLwork_PY(prename, srcPath, testDataPathDir, outputDir)
    return cov_info, res, file_order, RuntimeErrorFlag


def getInfo(temp_order, caseNum, res, mutateOutPutDir, programOutPutDir):
    Akf, Anf, Akp, Anp = 0, 0, 0, 0
    for i in range(caseNum):
        myOutFile = os.path.join(programOutPutDir, temp_order[i])
        mutantOutFile = os.path.join(mutateOutPutDir, temp_order[i])
        kill = not util.compare_res(mutantOutFile, myOutFile)
        if res[i] == True:
            if kill == True:
                Akp += 1
            if kill == False:
                Anp += 1
        if res[i] == False:
            if kill == True:
                Akf += 1
            if kill == False:
                Anf += 1
    return Akf, Anf, Akp, Anp

def MUSEChange(cov,res,order,temp_cov,temp_res,temp_order):
    f2p = 0
    p2f = 0
    for i in range(len(order)):
        for j in range(len(temp_order)):
            if order[i] == order[j]:
                if res[i] == False and temp_res == True:
                    f2p+=1
                if res[i] == True and temp_res == False:
                    p2f+=1
    return (f2p,p2f)


def work(language, source, prename,testDataPath):
    tempfile = os.path.join(util.rootPath, prename + "." + language)
    util.write_file(tempfile, source)
    src = tempfile
    # 准备工作
    mutateOutPutDir = os.path.join(util.rootPath, "mutate_output" + prename)
    programOutPutDir = os.path.join(util.rootPath, "program_output" + prename)

    ok = os.path.exists(mutateOutPutDir)
    if not ok:
        os.makedirs(mutateOutPutDir)
    ok = os.path.exists(programOutPutDir)
    if not ok:
        os.makedirs(programOutPutDir)

    cov, res, order, tempflag = getSrcCov(prename, src, testDataPath, programOutPutDir, language)
    print(cov, res, order)
    caseNum = len(res)
    list = util.read_line(src)
    lineMax = len(list)
    mutantcnt = 0
    # 初始化
    sus_jac = {}
    sus_oc = {}
    sus_op = {}
    sus_tu = {}
    sus_ds = {}
    sus_MUSE = {}
    vis = {}
    for i in range(1, lineMax + 1):
        sus_jac[i] = 0
        sus_oc[i] = 0
        sus_op[i] = 0
        sus_tu[i] = 0
        sus_ds[i] = 0
        sus_MUSE[i] = -99999
        vis[i] = 0

    mutatePath = os.path.join(util.rootPath, "mutant" + prename + "." + language)
    if language == "py":
        languagetype = 0
    else:
        languagetype = 1
    for i in range(caseNum):
        if res[i] == False:
            for lineIndex in cov[i]:
                if lineIndex!=9:
                    continue
                if vis[lineIndex] == 1:
                    continue
                vis[lineIndex] = 1
                # 单行变异
                line = list[lineIndex - 1]
                temp_sus_jac = [-1]
                temp_sus_oc = [-1]
                temp_sus_op = [-1]
                temp_sus_tu = [-1]
                temp_sus_ds = [-1]
                temp_sus_MUSE = []

                # 部分优化
                if "scanf" in line or "main" in line:
                    continue

                for key, value in MBFL_Formular.mutation_trick[languagetype].items():
                    if key in line:
                        for mutation_operator in value:
                            linelen = len(line)
                            pos = 0
                            while pos >= 0 and pos < linelen:
                                pos = line.find(key, pos)
                                if pos == -1:
                                    break
                                newline = line[0:pos] + mutation_operator + line[pos + len(key):]
                                pos += len(key)
                                newlist = list[:]
                                newlist[lineIndex - 1] = newline
                                util.write_file(mutatePath, newlist)
                                # 能够通过编译的变异体个数
                                if util.CheckCompile(mutatePath):
                                    mutantcnt += 1
                                else:
                                    continue
                                # 获取到变异体，统计是否杀死
                                # print("-" * 20)
                                # print(mutantcnt)
                                # print(lineIndex, pos)
                                # for xx in newlist:
                                #     print(xx)


                                temp_cov, temp_res, temp_order, RuntimeErrorFlag = getSrcCov("mutant" + prename, mutatePath,
                                                                                             testDataPath,
                                                                                             mutateOutPutDir, language)
                                # C,CPP变异体存在运行错误crash，无法生成覆盖路径文件，因此去掉
                                # PY遇到crash填充的是空集合，不影响计算

                                if RuntimeErrorFlag:
                                    continue

                                Akf, Anf, Akp, Anp = getInfo(temp_order, caseNum, res, mutateOutPutDir,
                                                             programOutPutDir)


                                temp_sus_jac.append(MBFL_Formular.cal_jaccard(Akf, Anf, Akp, Anp))
                                temp_sus_oc.append(MBFL_Formular.cal_ochiai(Akf, Anf, Akp, Anp))
                                temp_sus_op.append(MBFL_Formular.cal_op2(Akf, Anf, Akp, Anp))
                                temp_sus_tu.append(MBFL_Formular.cal_tarantula(Akf, Anf, Akp, Anp))
                                temp_sus_ds.append(MBFL_Formular.cal_dstar(Akf, Anf, Akp, Anp, 3))

                                # failNum 表示原来是fail现在变异体中是pass的，passNum表示原来是pass的现在变异体中是fail的
                                # f2p表示全部变异体的fail变pass的个数，p2f表示全部变异体的pass变fail的个数
                                #mutant_sus = failNum - (f2p/p2f)*passNum
                                #MUSEsus = AVG(murant_sus)
                                #MUSEChange 返回 [(f2p, p2f),....]
                                temp_sus_MUSE.append(MUSEChange(cov, res, order, temp_cov, temp_res, temp_order))
                sus_jac[lineIndex] = max(sus_jac[lineIndex], max(temp_sus_jac))
                sus_oc[lineIndex] = max(sus_oc[lineIndex], max(temp_sus_oc))
                sus_op[lineIndex] = max(sus_op[lineIndex], max(temp_sus_op))
                sus_ds[lineIndex] = max(sus_ds[lineIndex], max(temp_sus_ds))
                sus_tu[lineIndex] = max(sus_tu[lineIndex], max(temp_sus_tu))

                MUSEcnt = len(temp_sus_MUSE)
                if MUSEcnt == 0:
                    sus_MUSE[lineIndex] = -99999
                else:
                    f2pall = 0
                    p2fall = 0.001#避免除零问题
                    for item in temp_sus_MUSE:
                        f2pall+=item[0]
                        p2fall+=item[1]
                    MUSEtempres = 0
                    for item in temp_sus_MUSE:
                        MUSEtempres+=(item[0]-(f2pall/p2fall)*item[1])
                    sus_MUSE[lineIndex] = MUSEtempres/MUSEcnt

    # util.logInfo("../MutantProcess.txt", FilePath + "的MBFL过程共产生变异体" + str(mutantcnt))
    # print(mutantcnt)
    clean(mutateOutPutDir, programOutPutDir, prename)
    return lineMax, sus_jac, sus_oc, sus_op, sus_tu, sus_ds,sus_MUSE
