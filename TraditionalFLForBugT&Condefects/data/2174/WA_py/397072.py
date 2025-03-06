# coding=utf-8
ls = raw_input().split()
while ls[0] != '':
    if ls[1] == 0 :
        print("error")
    else :
        t = float(ls[0])/float(ls[1]) - ls[0]/ls[1]
        if t < 0.5 :
            print(ls[0] / ls[1])
        else :
            print((ls[0] / ls[1]) + 1)
    ls = raw_input().split()
