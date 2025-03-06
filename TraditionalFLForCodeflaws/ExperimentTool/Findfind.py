import os
import OJexperiment.util as util

SBFLformularlist = ['Jacard', 'Tarantula', 'Ochiai', 'Op2', 'Dstar']
MBFLformularlist = ['Jacard', 'Tarantula', 'Ochiai', 'Op2', 'Dstar', "MUSE"]
SLICEformularlist = ["Frequency", "Union", "Intersection"]
ranktoplist = [1, 2, 3, 5, 10]

if __name__ == "__main__":
    content0 = util.read_line("detail_0.txt")
    content1 = util.read_line("detail_1.txt")

    len = len(content0)
    for index in range(1,len):
        name = content0[index].split()[0]
        SBFL0 = content0[index].split()[3:8]
        MBFL0 = content0[index].split()[9:15]
        SLICE0 = content0[index].split()[16:19]

        SBFL1 = content1[index].split()[3:8]
        MBFL1 = content1[index].split()[9:15]
        SLICE1 = content1[index].split()[16:19]

        flagSBFL = False
        flagMBFL = False
        flagSLICE = False
        for i in range(5):
            if float(SBFL1[i])>float(SBFL0[i]):
                flagSBFL = True
        for i in range(6):
            if float(MBFL1[i])>float(MBFL0[i]):
                flagMBFL = True
        for i in range(3):
            if float(SLICE1[i])>float(SLICE0[i]):
                flagSLICE = True

        if flagSBFL and flagMBFL and flagSLICE:
            print(name)