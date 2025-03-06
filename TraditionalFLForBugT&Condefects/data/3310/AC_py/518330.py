# coding=utf-8
from math import sin
def f(x,n):
    if(x==0):
        return sin(n)
    else:
        return sin(f(x-1,n))
while True:
    a=float(input())
    b=a
    print("%.6f"%f(a,b))
