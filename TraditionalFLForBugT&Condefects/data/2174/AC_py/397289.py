# coding=utf-8
ls = raw_input().split()
x = ls[0]
y = ls[1]
c,d = int(x),int(y)
while x != '':
    if d == 0:
        print("error")
    else:
        a = float(x)/float(y)
        b = a - int(c/d)
        if b < 0.5:
            print(int(c/d))
        else:
            print(int(c/d) + 1)
    ls = raw_input().split()
    x = ls[0]
    y = ls[1]
    c,d = int(x),int(y)
