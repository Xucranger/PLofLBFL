# coding=utf-8
from math import *
def Q(n:int,m:int):
    if n==0:
        return sin(m)
    return sin(Q(n-1,m))
t=1
while t==1:
    m=int(input())
    print("%.6f"%round(Q(m,m),6))
