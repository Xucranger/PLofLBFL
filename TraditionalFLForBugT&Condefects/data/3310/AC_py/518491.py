# coding=utf-8
from math import *
def FunSin(n:int)->int:
    sum=sin(n)
    for i in range(1,n+1):
        n=sum
        sum=sin(n)
    return sum
while True:
    n=eval(input())
    q=FunSin(n)
    print("%.6f"%q)
