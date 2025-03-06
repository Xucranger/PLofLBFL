# coding=utf-8
import math
def fun(n,m):
    if n == 0:
        return math.sin(m)
    else:
        return math.sin(fun(n-1,m))
while True:
    try:
        n = eval(input())
        m = fun(n,n)
        print("{0:.6f}".format(m))
    except:
        break
        pass
