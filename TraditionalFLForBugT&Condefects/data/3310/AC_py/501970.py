# coding=utf-8
from math import sin
while True:
    n = int(input())
    r = sin(n)
    for i in range(1,n+1):
        r = sin(r)
    print("%.6f" % r)
