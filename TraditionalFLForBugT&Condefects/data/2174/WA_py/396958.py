# coding=utf-8
a, b = map(int, input().split())
while a != '':
    c = int(a)
    d = int(b)
    if b == 0 :
        print("error")
    else :
        e = int(c/d)
        f = c/d - e
        if f < 0.5 :
            print(int(a / b))
        else :
            print(int((a / b)) + 1)
    a, b = map(int, input().split())
