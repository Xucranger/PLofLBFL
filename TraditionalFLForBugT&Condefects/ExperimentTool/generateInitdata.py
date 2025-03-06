import OJexperiment.util as util
import os
def extractFaultline(content):
    return int(content.split("<TAG>")[1])

def init():
    datapath = "./data"
    languages = ['c', 'cpp', 'py']
    problemlist = ["2208","3310","2244","3905","3904","3919","3924","3955","3922","3925"]
    for proId in problemlist:
        count = {'c':0,'cpp':0,'py':0}
        for language in languages:
            recordfileDir = os.path.join(datapath, proId, "TAG_" + language)
            recordfileList = os.listdir(recordfileDir)
            for item in recordfileList:
                itempath = os.path.join(recordfileDir, item)
                content = util.read_line(itempath)
                wafilename = content[0]
                diffnum = int(content[2])
                if diffnum <= 3 and diffnum >= 1:
                    count[language]+=1
                    faultlines = []
                    for index in range(3, 3 + diffnum):
                        faultlines.append(extractFaultline(content[index]))
                    extractdata = proId + " " + language + " " + wafilename + " " + str(faultlines)
                    # print(extractdata)
                    util.write_file_add("./data/initdata.txt", [extractdata])
                else:
                    continue
        print(count)

if __name__ == "__main__":
    init()
