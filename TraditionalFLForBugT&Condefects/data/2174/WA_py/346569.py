# coding=utf-8
while 1:
    a,b = (int(x) for x in raw_input().split())
    c = a/b
    d = a//b
    e = c - d
    if b == 0:
        print("error")
    else:
        if e >= 0.5:
            print(d + 1)
        else:
            print(d)
