# coding=utf-8
ls = input().split(" ")
while ls[0] != '':
    if ls[1] == 0 :
        print("error")
    else :
        t = float(ls[0])/float(ls[1]) - eval(ls[0])/eval(ls[1])
        if t < 0.5 :
            print(eval(ls[0]) / eval(ls[1]))
        else:
            print(eval(ls[0]) / eval(ls[1])+1)
    ls = input().split(" ")
