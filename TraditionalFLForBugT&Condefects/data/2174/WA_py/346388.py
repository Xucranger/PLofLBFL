# coding=utf-8
while True:
    a,b = input().split()
    a = int(a)
    b = int(b)
    if b==0:
        print("error")
    else:
        print("%.0f" %(a/b))
