# coding=utf-8
import math
def c(n,t):
    if n==0:
        return math.sin(t)
    else:
        return math.sin(c(n-1,t))
while True:
    n=input()
    n=int(n)
    t=n
    print('%.6f'%c(n,t))
