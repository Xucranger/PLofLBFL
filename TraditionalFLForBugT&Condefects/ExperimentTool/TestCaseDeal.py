import os
import OJexperiment.util as util
# 不带n,一行一个输入，输出
def caseSplit1(proPath, subname):
    global cnt
    inCasePath = os.path.join(proPath, "TEST_DATA", subname + ".in")
    outCasePath = os.path.join(proPath, "TEST_DATA", subname + ".out")
    # 修改发生在这一行
    incontent = util.read_line(inCasePath)[0:]
    outcontent = util.read_line(outCasePath)
    for index in range(len(incontent)):
        newinCasePath = os.path.join(proPath, "TEST_DATA_TCG1", str(cnt) + ".in")
        newoutCasePath = os.path.join(proPath, "TEST_DATA_TCG1", str(cnt) + ".out")
        print(incontent[index].strip(), outcontent[index].strip(), cnt)
        cnt += 1
        util.write_file(newinCasePath, [incontent[index].strip()])
        util.write_file(newoutCasePath, [outcontent[index].strip()])


# 初始带n，一行一个输入输出
def caseSplit2(proPath, subname):
    global cnt
    inCasePath = os.path.join(proPath, "TEST_DATA", subname + ".in")
    outCasePath = os.path.join(proPath, "TEST_DATA", subname + ".out")
    # 修改发生在这一行，n不要
    incontent = util.read_line(inCasePath)[1:]
    outcontent = util.read_line(outCasePath)
    for index in range(len(incontent)):
        newinCasePath = os.path.join(proPath, "TEST_DATA_TCG1", str(cnt) + ".in")
        newoutCasePath = os.path.join(proPath, "TEST_DATA_TCG1", str(cnt) + ".out")
        print(incontent[index].strip(), outcontent[index].strip(), cnt)
        cnt += 1
        util.write_file(newinCasePath, ["1",incontent[index].strip()])
        util.write_file(newoutCasePath, [outcontent[index].strip()])

if __name__ == "__main__":
    global cnt
    cnt = 1
    proId = 3310
    dataPath = ".\data"
    proPath = os.path.join(dataPath, str(proId))
    testCasePath = os.path.join(proPath, "TEST_DATA")
    filelist = os.listdir(testCasePath)
    for filename in filelist:
        if ".in" in filename:
            subname = filename[:-3]
            caseSplit1(proPath, subname)
