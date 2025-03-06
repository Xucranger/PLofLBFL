# coding=utf-8
from math import sin
while True:
    n=int(input())
    t=n
    def Fuc(n):
        if(n==0):
            return sin(t)
        return sin(Fuc(n-1))
    print("%.6f"%Fuc(n))
