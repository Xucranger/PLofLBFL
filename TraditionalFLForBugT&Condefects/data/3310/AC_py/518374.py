# coding=utf-8
from math import sin
def D(x, n):
    if x == 0:
        return sin(n)
    else:
        return sin(D(x-1, n))
while True:
    n = int(input())
    r = D(n, n)
    print("%.6f" % r)
