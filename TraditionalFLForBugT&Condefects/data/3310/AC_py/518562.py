# coding=utf-8
import math
def F(n,x):
    if x==0:
       return math.sin(n)
    else:
        return math.sin(F(n,x-1))
while True:
    n=int(input())
    e=F(n,n)
    print("%.6f" % e)
