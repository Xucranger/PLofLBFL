# coding=utf-8
import math
from decimal import Decimal
def f(x,n):
    if x==0:
        return math.sin(n)
    elif n>0:
        return math.sin(f(x-1,n))
while True:
    n=float(input())
    m=n
    print("%.6f"%f(n,m))
