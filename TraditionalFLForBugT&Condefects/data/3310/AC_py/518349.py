# coding=utf-8
from math import sin
def F(x, n):
    if x == 0:
        return sin(n)
    else:
        return sin(F(x-1, n))
while True:
    n = int(input())
    res = F(n, n)
    print("%.6f" % res)
