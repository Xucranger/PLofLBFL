# coding=utf-8
while True:
    a,b=map(int,input().split())
    c = float(a/b)
    if b == 0:
        print("error")
    if c%1 >= 0.5:
        c = int(c) +1
        print(c)
    else:
        c = int(c)
        print(c)
