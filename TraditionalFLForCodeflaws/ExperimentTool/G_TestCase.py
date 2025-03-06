import os
import OJexperiment.util as util

# 合并测试用例，对应前面1，无n，一行一输入输出
def dealwith1(granularity, proid, testdataPath):
    filelist = os.listdir(testdataPath)
    pairname = []
    for item in filelist:
        if ".in" in item:
            subname = item[:-3]
            pairname.append(subname)
    print(pairname)
    newtestdatadir = os.path.join("G_TEST_CASE", str(proid), str(granularity))
    ok = os.path.exists(newtestdatadir)
    if not ok:
        os.makedirs(newtestdatadir)
    mod = len(pairname)
    newnum = 1
    for i in range(10):
        stpos = i * granularity
        edpos = (i + 1) * granularity
        infilename = os.path.join(newtestdatadir, str(newnum) + ".in")
        outfilename = os.path.join(newtestdatadir, str(newnum) + ".out")
        for index in range(stpos, edpos):
            incontent = util.read_line(os.path.join(testdataPath, pairname[index % mod] + ".in"))
            util.write_file_add(infilename, incontent)
            outcontent = util.read_line(os.path.join(testdataPath, pairname[index % mod] + ".out"))
            util.write_file_add(outfilename, outcontent)
            # print(incontent)
        newnum += 1
        if newnum > 3 and edpos > mod:
            break

# 合并测试用例，有n，一行一输入输出
def dealwith2(granularity, proid, testdataPath):
    filelist = os.listdir(testdataPath)
    pairname = []
    for item in filelist:
        if ".in" in item:
            subname = item[:-3]
            pairname.append(subname)
    print(pairname)
    newtestdatadir = os.path.join("G_TEST_CASE", str(proid), str(granularity))
    ok = os.path.exists(newtestdatadir)
    if not ok:
        os.makedirs(newtestdatadir)
    mod = len(pairname)
    newnum = 1
    for i in range(10):
        stpos = i * granularity
        edpos = (i + 1) * granularity
        infilename = os.path.join(newtestdatadir, str(newnum) + ".in")
        outfilename = os.path.join(newtestdatadir, str(newnum) + ".out")
        util.write_file_add(infilename, [granularity])
        for index in range(stpos, edpos):
            incontent = util.read_line(os.path.join(testdataPath, pairname[index % mod] + ".in"))[1:]
            util.write_file_add(infilename, incontent)
            outcontent = util.read_line(os.path.join(testdataPath, pairname[index % mod] + ".out"))
            util.write_file_add(outfilename, outcontent)
            # print(incontent)
        newnum += 1
        if newnum > 3 and edpos > mod:
            break


if __name__ == "__main__":
    prolist = [3310]
    for proid in prolist:
        testdataPath = os.path.join("./data", str(proid), "TEST_DATA_TCG1")

        for g in range(1, 11):
            dealwith1(g,proid,testdataPath)
