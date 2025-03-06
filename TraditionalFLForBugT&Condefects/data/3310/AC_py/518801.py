# coding=utf-8
from math import sin
def A(x, n):
    if x == 0:
        a=sin(n)
        return a
    else:
        return sin(A(x-1, n))
while True:
    n=int(input())
    r=A(n, n)
    print("%.6f" % r)
