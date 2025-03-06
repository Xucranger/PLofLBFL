# coding=utf-8
import shutil
import sys
import os
import util
import multiprocess2
import json
import SBFL.SBFL_Formular as SBFL_Formular
# import Ctool.ctool as ctool
# import Cpptool.cpptool as cpptool
import Pytool.pytool as pytool
import Cpptool.cpptool as cpptool
# import OJexperiment.util as util
# import OJexperiment.SBFL.SBFL_Formular as SBFL_Formular
# import OJexperiment.Ctool.ctool as ctool
# import OJexperiment.Cpptool.cpptool as cpptool
# import OJexperiment.Pytool.pytool as pytool


# 切片放在这儿一起做
def SUnion(lineNum, cov, res):
    temp = {}
    for i in range(1, lineNum + 1):
        temp[i] = 0
    caseNum = len(res)
    for caseIndex in range(caseNum):
        if res[caseIndex] == False:
            for i in cov[caseIndex]:
                if i in temp.keys():
                    temp[i] = 1
    return temp


def SIntersection(lineNum, cov, res):
    temp = {}
    for i in range(1, lineNum + 1):
        temp[i] = 0
    caseNum = len(res)
    failNum = 0
    for caseIndex in range(caseNum):
        if res[caseIndex] == False:
            failNum += 1
            for i in cov[caseIndex]:
                if i in temp.keys():
                    temp[i] += 1
    tempres = {}
    for k, v in temp.items():
        if v == failNum:
            tempres[k] = 1
        else:
            tempres[k] = 0
    return tempres


def SFrequency(lineNum, cov, res):
    temp = {}
    for i in range(1, lineNum + 1):
        temp[i] = 0
    caseNum = len(res)
    for caseIndex in range(caseNum):
        if res[caseIndex] == False:
            for i in cov[caseIndex]:
                if i in temp.keys():
                    temp[i] += 1
    return temp


# 语句总数 测试用例总数，pass用例总数，fail用例总数
# 覆盖Si的用例总数，覆盖Si且pass的，覆盖Si且fail的
# 未覆盖Si的用例总数，未覆盖Si且pass的，未覆盖Si且fail的
def CountInfo(lineMax, cov, res):
    caseNum = len(res)
    stateICovNum, stateICovPassNum, stateICovFailNum = {}, {}, {}
    stateIunCovNum, stateIunCovPassNum, stateIunCovFailNum = {}, {}, {}

    for lineIndex in range(1, lineMax + 1):
        covPass, covFail, uncovPass, uncovFail = 0, 0, 0, 0
        for caseIndex in range(0, caseNum):
            if lineIndex in cov[caseIndex]:
                if res[caseIndex] is True:
                    covPass += 1
                else:
                    covFail += 1
            else:
                if res[caseIndex] is True:
                    uncovPass += 1
                else:
                    uncovFail += 1
        stateICovNum[lineIndex] = covPass + covFail
        stateICovPassNum[lineIndex] = covPass
        stateICovFailNum[lineIndex] = covFail
        stateIunCovNum[lineIndex] = uncovPass + uncovFail
        stateIunCovPassNum[lineIndex] = uncovPass
        stateIunCovFailNum[lineIndex] = uncovFail

    return lineMax, caseNum, res.count(True), res.count(False) \
        , stateICovNum, stateICovPassNum, stateICovFailNum \
        , stateIunCovNum, stateIunCovPassNum, stateIunCovFailNum


def clean():
    targetDir=os.path.join(util.rootRunPath)
    list=os.listdir(targetDir)
    for line in list:
        actual_file=os.path.join(targetDir,line)
        if os.path.isfile(actual_file):
            os.remove(actual_file)
        else:
            shutil.rmtree(actual_file,True)

def saveToJson(proId, versionId, cov, res, lineNum, caseNum, casePass, caseFail, siCovCase, siCovPass, siCovFail, siunCovCase, siunCovPass, siunCovFail):

    if not os.path.exists(util.rootCovPath):
        os.makedirs(util.rootCovPath)

    fileName = os.path.join(util.rootCovPath, proId + "_" + versionId)

    data = {
        "cov": cov,
        "res": res,
        "lineNum": lineNum,
        "caseNum": caseNum,
        "casePass": casePass,
        "caseFail": caseFail,
        "siCovCase": siCovCase,
        "siCovPass": siCovPass,
        "siCovFail": siCovFail,
        "siunCovCase": siunCovCase,
        "siunCovPass": siunCovPass,
        "siunCovFail": siunCovFail
    }

    with open(fileName, 'w', encoding="utf-8") as json_file:
        json.dump(data, json_file, ensure_ascii=False, indent=4)

    


def work(proId, versionId, source, prename, testDataPath):
    tempfile = os.path.join(util.rootRunPath, prename + ".txt")
    util.write_file(tempfile, source)

    cov, res = cpptool.SBFLwork_CPP(prename, tempfile, testDataPath)
    # print(cov, res)

    if cov==None or res==None:
        return None,None,None,None,None,None,None,None,None,None,None
    list = util.read_line(tempfile)
    lineMax = len(list)

    clean()
    lineNum, caseNum, casePass, caseFail, siCovCase, siCovPass, siCovFail, siunCovCase, siunCovPass, siunCovFail = CountInfo(
        lineMax,
        cov, res)

    
    saveToJson(proId, versionId, cov, res, lineNum, caseNum, casePass, caseFail, siCovCase, siCovPass, siCovFail, siunCovCase, siunCovPass, siunCovFail)

    sus_oc = {}
    sus_tu = {}
    sus_op = {}
    sus_ds = {}
    sus_jac = {}
    for lineIndex in range(1, lineNum + 1):
        sus_oc[lineIndex] = SBFL_Formular.cal_ochiai(caseFail, casePass, siCovFail[lineIndex], siCovPass[lineIndex],
                                                     siunCovFail[lineIndex], siunCovPass[lineIndex])
        sus_tu[lineIndex] = SBFL_Formular.cal_turantula(caseFail, casePass, siCovFail[lineIndex], siCovPass[lineIndex],
                                                        siunCovFail[lineIndex], siunCovPass[lineIndex])
        sus_op[lineIndex] = SBFL_Formular.cal_op2(caseFail, casePass, siCovFail[lineIndex], siCovPass[lineIndex],
                                                  siunCovFail[lineIndex], siunCovPass[lineIndex])
        sus_ds[lineIndex] = SBFL_Formular.cal_dstar(caseFail, casePass, siCovFail[lineIndex], siCovPass[lineIndex],
                                                    siunCovFail[lineIndex], siunCovPass[lineIndex], 3)
        sus_jac[lineIndex] = SBFL_Formular.cal_jaccard(caseFail, casePass, siCovFail[lineIndex], siCovPass[lineIndex],
                                                       siunCovFail[lineIndex], siunCovPass[lineIndex])

    return lineNum, sus_oc, sus_tu, sus_op, sus_ds, sus_jac, \
           SUnion(lineNum, cov, res), SIntersection(lineNum, cov, res), SFrequency(lineNum, cov, res),cov,res
