# coding=utf-8
from math import *
def F(n:int,a:int):
    if n == 0:
        return sin(a)
    return sin(F(n-1,a))
while True:
    a = int(input())
    print("%.6f"%round(F(a,a),6))
