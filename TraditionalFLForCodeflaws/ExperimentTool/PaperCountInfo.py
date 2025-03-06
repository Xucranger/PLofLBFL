import OJexperiment.util as util
import os


def getFaultline():
    return 1


def getLoc():
    return 1


def loadInitData():
    initdataPath = "../data/cleandata.txt"
    res = util.read_line(initdataPath)
    return res


def initdic():
    dic = {}
    languages = ['c', 'cpp', 'py']
    for language in languages:
        dic[language] = {"min": 9999, "max": 0, "faultTot": 0, "proNum": 0}
    return dic


if __name__ == "__main__":
    initdata = loadInitData()
    dic = {}
    for item in initdata:
        proId = item.split()[0]
        if proId not in dic.keys():
            dic[proId] = initdic()

        language = item.split()[1]
        filename = item.split()[2].split(".")[0]
        logFilePath = proId + "_" + language + "_" + filename + ".txt"
        faultLines = list(map(int, item[item.index("[") + 1:-1].split(",")))
        sourcefile = os.path.join("../data", proId, "WA_" + language, filename + "." + language)
        content = util.read_line(sourcefile)
        LOC = len(content)
        dic[proId][language]['max'] = max(dic[proId][language]['max'], LOC)
        dic[proId][language]['min'] = min(dic[proId][language]['min'], LOC)
        dic[proId][language]['faultTot'] += len(faultLines)
        dic[proId][language]['proNum'] += 1

for item in dic.keys():
        print(item)
        for iitem in dic[item].keys():
            # print(iitem)
            print(str(dic[item][iitem]["proNum"]) + "\t" + str(dic[item][iitem]["faultTot"]) + "\t" + str(
                dic[item][iitem]["min"]) + "-" + str(dic[item][iitem]["max"]))
