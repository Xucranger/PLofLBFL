# coding=utf-8
while 1:
    a,b = (int(x) for x in raw_input().split())
    if b == 0:
        print("error")
    else:
        if a/b - a//b >= 1/2:
            print(a//b + 1)
        else:
            print(a//b)
