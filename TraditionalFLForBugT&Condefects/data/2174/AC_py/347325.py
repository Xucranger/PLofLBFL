# coding=utf-8
a, b = map(int, raw_input().split())
while a != '':
    c = float(a)
    d = float(b)
    if b == 0 :
        print("error")
    else :
        e = c/d
        f = e - a/b
        if f < 0.5 :
            print(a / b)
        else :
            print((a / b) + 1)
    a, b = map(int, raw_input().split())
