import shutil
import os
import OJexperiment.util as util

dir = ["./COV"]
dic = {}
for subdir in dir:
    for g in range(0, 11):
        cnt = 0
        dic = {}
        list = os.listdir(os.path.join(subdir, str(g)))
        for item in list:
            filecontent = util.read_line(os.path.join(subdir, str(g), item))
            if ("True" not in str(filecontent[1])) :
                item = item.split(".")[0]
                if item in dic.keys():
                    dic[item] += 1
                else:
                    dic[item] = 1
                cnt += 1
        print(g, len(list) - cnt)
        # a = util.read_line("../data/initdata.txt")
        # res = []
        # for item in a:
        #     proid = item.split()[0]
        #     lan = item.split()[1]
        #     subid = item.split()[2].split(".")[0]
        #     k = proid + "_" + lan + "_" + subid
        #     if k in dic.keys():
        #         continue
        #     res.append(item)
        # util.write_file_add("./cleandata_" + str(g) + ".txt", res)
