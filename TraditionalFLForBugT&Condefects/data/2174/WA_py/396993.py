# coding=utf-8
a, b = map(int, input().split())
while a != '':
    c = float(a)
    d = float(b)
    if b == 0 :
        print("error")
    else :
        e = c/d
        f = e - int(a/b)
        if f < 0.5 :
            print(int(a / b))
        else :
            print(int((a / b)) + 1)
    a, b = map(int, input().split())
