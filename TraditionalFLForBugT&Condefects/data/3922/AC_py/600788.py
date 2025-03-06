# coding=utf-8
while True:
    a,b=map(float,input().split())
    if b!=0:
        print(int((a/b+0.5)//1))
    else:
        print("error")
