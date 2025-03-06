# coding=utf-8
from math import sin
while True:
    try:
        n=int(input())
        x=sin(n)
        for i in range(0,n+1):
            y = sin(x)
        for j in range(0,i):
            x=sin(x)
        print(format(x,".6f"))
    except:
        break
