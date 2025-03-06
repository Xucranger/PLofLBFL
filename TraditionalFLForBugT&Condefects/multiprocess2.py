import multiprocessing
# import OJexperiment.util as util
# import OJexperiment.SBFL.SBFL as SBFL
# import OJexperiment.MBFL.MBFL as MBFL

import util as util
import SBFL.SBFL as SBFL
import MBFL.MBFL as MBFL
import uuid
import time
import os
import re
import pickle

filterData = []


def clean():
    list = os.listdir(util.rootPath1)
    for item in list:
        if re.match(".*\.gcov", item):
            os.remove(os.path.join(util.rootPath, item))


def savemethod(logFilePath, method, timecost, list):
    methodDir = os.path.join(util.rootResultPath, "Susresult", method)
    granularityDir = os.path.join(methodDir)
    ok = os.path.exists(granularityDir)
    if not ok:
        os.makedirs(granularityDir)
    tempfile = os.path.join(granularityDir, logFilePath + ".txt")
    f = open(tempfile, 'w', encoding='utf-8')

    if method == "SBFL":
        name = ["Jacard", "Tarantula", "Ochiai", "Op2", "Dstar"]
    elif method == "MBFL":
        name = ["Jacard", "Tarantula", "Ochiai", "Op2", "Dstar", "MUSE"]
    elif method == "SLICE":
        name = ["Frequency", "Union", "Intersection"]
    else:
        name = ["covinfo", "resinfo", "covnum"]
        for ii in range(len(list)):
            f.write(name[ii])
            f.write(" " + str(list[ii]))
            f.write("\n")
        f.close()
        return

    for ii in range(len(list)):
        lineNum = len(list[ii])
        f.write(name[ii])
        for index in range(1, lineNum + 1):
            f.write(" " + str(list[ii][index]))
        f.write("\n")
    f.write(str(timecost))
    f.close()


def DealWithCov(covinfo, resinfo):
    newlist = []
    dict = {}
    for item in covinfo:
        temp = list(set(item))
        temp.sort()
        newlist.append(temp)
        dict[str(temp)] = 1
    return [newlist, resinfo, len(dict)]


def FLwork(proId, versionId):
    print("FLwork", proId, versionId)
    
    logfilename = proId + "_" + versionId + "_" + "faultyVersion"
    srcPath = os.path.join(util.rootSourcePath, proId, "C++", versionId, "faultyVersion.cpp")
    source = util.read_line(srcPath)
    prename = "Main.cpp"

    testDataPath = os.path.join(util.rootTestPath, proId)

    SBFLResultsPath= os.path.join(util.rootResultPath, "Susresult", 'SBFL',logfilename + ".txt")
    # if os.path.exists(SBFLResultsPath):
    #     os.remove(SBFLResultsPath)
    if not os.path.exists(SBFLResultsPath):
        time_start = time.time()
        lineNum, sus_oc, sus_tu, sus_op, sus_ds, sus_jac, SUnion, SIntersection, SFrequency, covinfo, resinfo = SBFL.work(proId, versionId, source,prename,testDataPath)
        if lineNum == None:
            return
        time_end = time.time()
        list = [sus_jac, sus_tu, sus_oc, sus_op, sus_ds]
        savemethod(logfilename, 'SBFL', time_end - time_start, list)

        list = [SFrequency, SUnion, SIntersection]
        savemethod(logfilename, 'SLICE', time_end - time_start, list)
        list = DealWithCov(covinfo, resinfo)
        savemethod(logfilename, 'COV', time_end - time_start, list)

    # SBFLResultsPath= os.path.join(util.rootResultPath, "Susresult", 'SBFL',logfilename + ".txt")
    # if os.path.exists(SBFLResultsPath):
    #     MBFLResultsPath = os.path.join(util.rootResultPath, "Susresult", 'MBFL',logfilename + ".txt")
    #     if not os.path.exists(MBFLResultsPath):
    #         time_start = time.time()
    #         lineMax, sus_jac, sus_oc, sus_op, sus_tu, sus_ds, sus_MUSE = MBFL.work(proId, versionId, source, prename, testDataPath)
    #         time_end = time.time()
    #         list = [sus_jac, sus_tu, sus_oc, sus_op, sus_ds, sus_MUSE]
    #         savemethod(logfilename, 'MBFL', time_end - time_start, list)


if __name__ == "__main__":

    # with open('/home/shizhengyanjiu/OJexperiment/Condefects_Filter_Data.pkl', 'rb') as file:
    #     filterData = pickle.load(file)

    Susdir = os.path.join(util.rootResultPath, "Susresult")
    if not os.path.exists(Susdir):
        os.mkdir(Susdir)
    # dirlist = ['SBFL', 'MBFL', 'SLICE', 'COV']
    dirlist = ['SBFL', 'MBFL']
    for item in dirlist:
        subdir = os.path.join(Susdir, item)
        if not os.path.exists(subdir):
            os.mkdir(subdir)

    # pool = multiprocessing.Pool(processes=5)

    proIdList=os.listdir(util.rootSourcePath)

    for proId in proIdList:
        proIdDir=os.path.join(util.rootSourcePath,proId)
        versionDir = os.path.join(proIdDir, "C++")
        if not os.path.exists(versionDir):
            continue

        versionIdList=os.listdir(versionDir)
        for versionId in versionIdList:
            # if versionId not in filterData:
            #     continue

            # print("---------------------目前正在跑的versionID = " + versionId + "-------------------------------")
                
            # if versionId not in filterData:
            #     continue
            
            # if versionId not in existData:
            #     print(versionId)

            # continue

            # if versionId != '38475036':
            #     continue

            versionPath=os.path.join(versionDir,versionId)
            if not os.path.isdir(versionPath):
                print("不存在 " + versionPath)
                continue

            FLwork(proId, versionId)
            # pool.apply_async(FLwork, (proId, language, versionId,))
            # for granularity in range(0, 11):
            #     FLwork(proId, language, filename,granularity)
                # pool.apply_async(FLwork, (proId, language, filename, granularity,))
    # pool.close()
    # pool.join()
    # clean()
