# coding=utf-8
while 1:
    a,b = (float(x) for x in raw_input().split())
    if b == 0:
        print("error")
    else:
        if a/b - a//b >= 0.5:
            print(int(a//b + 1))
        else:
            print(int(a//b))
