# coding=utf-8
import math
def result(n,k):
    res=0.0
    if n==0:
        res=math.sin(k)
    else:
        res=math.sin(result(n-1,k))
    return res
while True:
    num=int(input())
    c=result(num,num)
    print("{:.6f}".format(c))
