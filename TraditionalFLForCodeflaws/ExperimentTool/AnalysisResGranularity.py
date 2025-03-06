import os
import OJexperiment.util as util

SBFLformularlist = ['Jacard', 'Tarantula', 'Ochiai', 'Op2', 'Dstar']
MBFLformularlist = ['Jacard', 'Tarantula', 'Ochiai', 'Op2', 'Dstar', "MUSE"]
SLICEformularlist = ["Frequency", "Union", "Intersection"]
ranktoplist = [1, 2, 3, 5, 10]


# 同排名rank平均值就是(st+ed)/2

# E@N 定位在topN的百分比
# EXAM 检查到第一个错误所需要的语句百分比
def getAVGRank(faultLine, suslist):
    rank = 1
    susValue = suslist[int(faultLine) - 1]
    newsusList = sorted(suslist, reverse=True)
    st = newsusList.index(susValue) + 1
    cnt = newsusList.count(susValue)
    # (st + st+cnt-1)/2
    rank = (st + st + cnt - 1) / 2
    return rank


def avg_rank(faultLine, dataFileName):
    dataList = util.read_line(dataFileName)
    # 最后一行为时间
    # 剩下的为各公式怀疑度详情
    timecost = dataList[-1]
    dataList = dataList[:-1]
    res = {}
    res['totLine'] = len(dataList[0].split()) - 1
    for onelineinfo in dataList:
        suslist = onelineinfo.split()
        formular_name = suslist[0]
        suslist = list(map(float, suslist[1:]))
        res[formular_name] = getAVGRank(faultLine, suslist)
    return res, timecost


def checkTop(rank, x):
    if rank <= x:
        return 1
    return 0


def init():
    SBFLRES = {}
    MBFLRES = {}
    SLICERES = {}
    SBFLRES['totCnt'] = 0
    SBFLRES['totLine'] = 0

    MBFLRES['totCnt'] = 0
    MBFLRES['totLine'] = 0

    SLICERES['totCnt'] = 0
    SLICERES['totLine'] = 0

    for formularname in SBFLformularlist:
        SBFLRES[formularname] = {}
        SBFLRES[formularname]['EXAM'] = 0
        SBFLRES[formularname]['EXAMper'] = 0
        for rank in ranktoplist:
            SBFLRES[formularname]['Top' + str(rank)] = 0
            SBFLRES[formularname]['Top' + str(rank) + "per"] = 0
    for formularname in MBFLformularlist:
        MBFLRES[formularname] = {}
        MBFLRES[formularname]['EXAM'] = 0
        MBFLRES[formularname]['EXAMper'] = 0
        for rank in ranktoplist:
            MBFLRES[formularname]['Top' + str(rank)] = 0
            MBFLRES[formularname]['Top' + str(rank) + "per"] = 0
    for formularname in SLICEformularlist:
        SLICERES[formularname] = {}
        SLICERES[formularname]['EXAM'] = 0
        SLICERES[formularname]['EXAMper'] = 0
        for rank in ranktoplist:
            SLICERES[formularname]['Top' + str(rank)] = 0
            SLICERES[formularname]['Top' + str(rank) + "per"] = 0

    return SBFLRES, MBFLRES, SLICERES


def filetempinit():
    SBFLRES = {}
    MBFLRES = {}
    SLICERES = {}

    for formularname in SBFLformularlist:
        SBFLRES[formularname] = 9999
    for formularname in MBFLformularlist:
        MBFLRES[formularname] = 9999
    for formularname in SLICEformularlist:
        SLICERES[formularname] = 9999
    return SBFLRES, MBFLRES, SLICERES, 0, 0, 0, 0, 0


def Cov_info(dataFileName):
    dataList = util.read_line(dataFileName)
    # 最后一行为覆盖的多样化情况
    covnum = dataList[-1].split()[1]
    return covnum


def work(susDataDir, granularity):
    SBFLRES, MBFLRES, SLICERES = init()
    contentDetail = "G" + str(granularity) + "\n"
    contentAll = "G" + str(granularity) + "\n"
    initdata = loadInitData()
    for item in initdata:
        proId = item.split()[0]
        language = item.split()[1]
        filename = item.split()[2].split(".")[0]
        logFilePath = proId + "_" + language + "_" + filename + ".txt"
        faultLines = list(map(int, item[item.index("[") + 1:-1].split(",")))

        # print(logFilePath, faultLines)
        # 初始化每个文件的值内容
        fileSBFLresult, fileMBFLresult, fileSLICEresult, \
        fileSBFLtimecost, fileMBFLtimecost, fileSLICEtimecost, \
        fileTotline, fileCovNum = filetempinit()

        # 单个文件的详细内容，多个里面取最好的那个
        for faultLine in faultLines:
            # 某个文件的SBFL情况
            SBFLTEMPRES, fileSBFLtimecost = avg_rank(faultLine,
                                                     os.path.join("../Susresult_back", "SBFL", str(granularity),
                                                                  logFilePath))
            for formularname in SBFLformularlist:
                fileSBFLresult[formularname] = min(SBFLTEMPRES[formularname], fileSBFLresult[formularname])

            # 某个文件的MBFL情况
            MBFLTEMPRES, fileMBFLtimecost = avg_rank(faultLine,
                                                     os.path.join("../Susresult_back", "MBFL", str(granularity),
                                                                  logFilePath))
            for formularname in MBFLformularlist:
                fileMBFLresult[formularname] = min(MBFLTEMPRES[formularname], fileMBFLresult[formularname])
            # 某个文件的SLICE情况
            SLICETEMPRES, fileSLICEtimecost = avg_rank(faultLine,
                                                       os.path.join("../Susresult_back", "SLICE", str(granularity),
                                                                    logFilePath))
            for formularname in SLICEformularlist:
                fileSLICEresult[formularname] = min(SLICETEMPRES[formularname], fileSLICEresult[formularname])

            fileTotline = SBFLTEMPRES['totLine']
            fileCovNum = Cov_info(os.path.join("../Susresult_back", "COV", str(granularity), logFilePath))

            # print(fileSBFLresult, fileSBFLtimecost)
            # print(fileMBFLresult, fileMBFLtimecost)
            # print(fileSLICEresult, fileSLICEtimecost)
            # print(fileTotline, fileCovNum)

        contentDetail += logFilePath.split(".")[0]
        contentDetail += "\t%s\t%s" % (fileTotline, fileCovNum)
        for formularname in SBFLformularlist:
            contentDetail += "\t%.3f" % (round(fileSBFLresult[formularname], 3))
        contentDetail += "\t%.3f" % (round(float(fileSBFLtimecost), 3))
        for formularname in MBFLformularlist:
            contentDetail += "\t%.3f" % (round(fileMBFLresult[formularname], 3))
        contentDetail += "\t%.3f" % (round(float(fileMBFLtimecost), 3))
        for formularname in SLICEformularlist:
            contentDetail += "\t%.3f" % (round(fileSLICEresult[formularname], 3))
        contentDetail += "\t%.3f" % (round(float(fileSLICEtimecost), 3))
        contentDetail += "\n"

        # 统计总的
        SBFLRES['totCnt'] += 1
        SBFLRES['totLine'] += fileTotline
        for formularname in SBFLformularlist:
            SBFLRES[formularname]['EXAM'] += fileSBFLresult[formularname] / fileTotline
            for rank in ranktoplist:
                SBFLRES[formularname]['Top' + str(rank)] += checkTop(fileSBFLresult[formularname], rank)

        MBFLRES['totCnt'] += 1
        MBFLRES['totLine'] += fileTotline
        for formularname in MBFLformularlist:
            MBFLRES[formularname]['EXAM'] += fileMBFLresult[formularname] / fileTotline
            for rank in ranktoplist:
                MBFLRES[formularname]['Top' + str(rank)] += checkTop(fileMBFLresult[formularname], rank)

        SLICERES['totCnt'] += 1
        SLICERES['totLine'] += fileTotline
        for formularname in SLICEformularlist:
            SLICERES[formularname]['EXAM'] += fileSLICEresult[formularname] / fileTotline
            for rank in ranktoplist:
                SLICERES[formularname]['Top' + str(rank)] += checkTop(fileSLICEresult[formularname], rank)

    for formularname in SBFLformularlist:
        SBFLRES[formularname]['EXAMper'] = SBFLRES[formularname]['EXAM'] / SBFLRES['totCnt']
        for rank in ranktoplist:
            SBFLRES[formularname]['Top' + str(rank) + "per"] = SBFLRES[formularname]['Top' + str(rank)] / SBFLRES[
                'totCnt']
    for formularname in MBFLformularlist:
        MBFLRES[formularname]['EXAMper'] = MBFLRES[formularname]['EXAM'] / MBFLRES['totCnt']
        for rank in ranktoplist:
            MBFLRES[formularname]['Top' + str(rank) + "per"] = MBFLRES[formularname]['Top' + str(rank)] / MBFLRES[
                'totCnt']
    for formularname in SLICEformularlist:
        SLICERES[formularname]['EXAMper'] = SLICERES[formularname]['EXAM'] / SLICERES['totCnt']
        for rank in ranktoplist:
            SLICERES[formularname]['Top' + str(rank) + "per"] = SLICERES[formularname]['Top' + str(rank)] / SLICERES[
                'totCnt']

    # ------------------------------------
    # 构建总的文件的内容
    for formularname in SBFLformularlist:
        for rank in ranktoplist:
            contentAll += "%d(%.1f%%)\t" % (
                SBFLRES[formularname]['Top' + str(rank)],
                round(SBFLRES[formularname]['Top' + str(rank) + "per"] * 100, 3))
        contentAll += "%.3f" % SBFLRES[formularname]['EXAMper']
        contentAll += "\n"
    for formularname in MBFLformularlist:
        for rank in ranktoplist:
            contentAll += "%d(%.1f%%)\t" % (
                MBFLRES[formularname]['Top' + str(rank)],
                round(MBFLRES[formularname]['Top' + str(rank) + "per"] * 100, 3))
        contentAll += "%.3f" % MBFLRES[formularname]['EXAMper']
        contentAll += "\n"

    for formularname in SLICEformularlist:
        for rank in ranktoplist:
            contentAll += "%d(%.1f%%)\t" % (
                SLICERES[formularname]['Top' + str(rank)],
                round(SLICERES[formularname]['Top' + str(rank) + "per"] * 100, 3))
        contentAll += "%.3f" % SLICERES[formularname]['EXAMper']
        contentAll += "\n"

    util.write_file_add("./result_all.txt", [contentAll])
    util.write_file_add("./detail_" + granularity + ".txt", [contentDetail])
    return


def loadInitData():
    initdataPath = "../data/cleandata.txt"
    res = util.read_line(initdataPath)
    return res


if __name__ == "__main__":
    susDataPath = "../Susresult_back"
    for granularity in range(0, 11):
        print("正在处理粒度" + str(granularity))
        work(susDataPath, str(granularity))
