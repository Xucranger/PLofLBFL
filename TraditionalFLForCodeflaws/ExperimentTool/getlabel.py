# coding=utf-8

import os
import sys
import OJexperiment.ExperimentTool.MinEditDistance as minedit
import OJexperiment.util as util


def generate(acdir, wadir, tagdir):
    acfilelist = os.listdir(acdir)
    wafilelist = os.listdir(wadir)
    cnt = 0
    for wafile in wafilelist:
        if "init" in wafile:
            continue
        cnt += 1
        minstep = 99999
        minpath = {}
        minresdic = {}
        pairacfile = ""
        dic = {}
        Sac = []
        Swa = []

        for acfile in acfilelist:
            acfilepath = os.path.join(acdir, acfile)
            wafilepath = os.path.join(wadir, wafile)
            print(acfilepath, wafile)
            dic, Sac, Swa, x1, x2 = util.myencode(acfilepath, wafilepath)
            #加速
            if(abs(len(Sac)-len(Swa))>=minstep or x2>=minstep):
                continue
            res = minedit.minEditDistance(Swa, Sac)
            if res["step"] < minstep:
                minstep = res["step"]
                minpath = res["path"]
                pairacfile = acfile
                minresdic = dic
            if minstep == 1:
                break

        if minstep != 99999:
            # tagfile = os.path.join(tagdir, str(cnt) + ".txt")
            tagfile = os.path.join(tagdir, wafile.replace("py", "txt"))
            content = []
            content.append(wafile)
            content.append(pairacfile)
            content.append(str(minstep))
            for i in minpath:
                temp = ""
                if "->" in i["target"]:
                    a, b = i["target"].split("->")
                    for key, value in minresdic.items():
                        if value == a:
                            a = key
                        if value == b:
                            b = key
                    temp = a + "<CHANGETO>" + b
                else:
                    for key, value in minresdic.items():
                        if value == i["target"]:
                            temp = key
                content.append(i["op"] + "<TAG>" + str(i["pos"]) + "<TAG>" + temp)
            # print(content)
            util.write_file(tagfile, content)
            # print(wafile, acfile, minstep,tagfile)


def work(problem_id, language, tagdir):
    problem_path = os.path.join(r'D:\software\OJexperiment\OJexperiment\data', str(problem_id))
    acdir = os.path.join(problem_path, "AC_" + language)
    wadir = os.path.join(problem_path, "WA_" + language)
    generate(acdir, wadir, tagdir)


if __name__ == "__main__":
    # languages = ['c', 'cpp', 'py']
    languages = ['py']
    # languages = ['c']
    datapath = r"D:\software\OJexperiment\OJexperiment\data"
    problem_list = os.listdir(datapath)
    for i in problem_list:
        for j in languages:
            path = os.path.join(datapath, str(i), "NEWTAG_" + j)
            ok = os.path.exists(path)
            if not ok:
                os.makedirs(path)
            work(i, j, path)
