# coding=utf-8
from math import sin
def D(q, s):
    if q == 0:
        return sin(s)
    else:
        return sin(D(q-1, s))
while True:
    s = int(input())
    t = D(s, s)
    print("%.6f" % t)
