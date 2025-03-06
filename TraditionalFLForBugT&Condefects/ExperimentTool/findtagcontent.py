import OJexperiment.util as util
import os
def extractFaultline(content):
    return int(content.split("<TAG>")[1])

def init():
    datapath = "./data"
    languages = ['c']
    problemlist = ["2174"]
    key = "129135.c"
    for proId in problemlist:
        for language in languages:
            recordfileDir = os.path.join(datapath, proId, "TAG_" + language)
            recordfileList = os.listdir(recordfileDir)
            for item in recordfileList:
                itempath = os.path.join(recordfileDir, item)
                content = util.read_line(itempath)
                wafilename = content[0]
                if wafilename == key:
                    print(itempath)

if __name__ == "__main__":
    init()
