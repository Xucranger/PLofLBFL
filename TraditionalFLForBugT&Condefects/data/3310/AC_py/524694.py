# coding=utf-8
import math
from decimal import Decimal
def f_(x,n):
    if x==0:
        return math.sin(n)
    elif n>0:
        return math.sin(f_(x-1,n))
while True:
    x=float(input())
    y=x
    print("%.6f"%f_(x,y))
