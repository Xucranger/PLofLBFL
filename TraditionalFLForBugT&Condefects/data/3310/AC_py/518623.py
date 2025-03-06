# coding=utf-8
from math import sin
def f_x(n,un):
    if n==0:
        return sin(un)
    else:
        return sin(f_x(n-1,un))
while True:
    n=float(input())
    un=n
    last=f_x(n,un)
    print("%.6f" % (last))
