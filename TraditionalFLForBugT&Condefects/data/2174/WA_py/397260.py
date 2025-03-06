# coding=utf-8
str = raw_input()
ls = str.split(" ")
while ls[0] != '':
    if int(ls[1]) == 0:
        print("error")
    else:
        print(int(round(int(ls[0])/int(ls[1]))))
    str = raw_input()
    ls = str.split(" ")
