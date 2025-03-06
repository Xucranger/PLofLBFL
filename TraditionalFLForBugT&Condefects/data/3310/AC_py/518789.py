# coding=utf-8
from math import*
while True:
    n = int(input())
    i = 1
    res = sin(n)
    while i<=n:
        res = sin(res)
        i += 1
    print("%.6f"%res)
