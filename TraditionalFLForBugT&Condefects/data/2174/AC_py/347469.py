# coding=utf-8
x, y = map(int, raw_input().split())
while x != '':
    m = float(x)
    n = float(y)
    if y == 0 :
        print("error")
    else :
        i = m/n
        j = i - x/y
        if j < 0.5 :
            print(x / y)
        else :
            print((x / y) + 1)
    x, y = map(int, raw_input().split())
