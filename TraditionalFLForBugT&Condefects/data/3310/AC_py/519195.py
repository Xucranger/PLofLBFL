# coding=utf-8
import math
def W(m, n):
    if m == 0:
        return math.sin(n)
    else:
        return math.sin(W(m - 1, n))
while True:
    n = int(input())
    w = W(n, n)
    print("%.6f" % w)
