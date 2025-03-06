# coding=utf-8
import math
m = 0
def fun(n):
    # x[0]=math.sin(0)
    # x=math.sin(n)
    # for i in range(n):
    #     x=math.sin(x)
    #     return x
    if n==0:
        return math.sin(m)
    else:
        return math.sin(fun(n-1))
while(1):
    n=int(input())
    if n==0:
        # num = math.sin(0)
        # print("%.6f" %num)
        print("0.000000")
    else:
        fun(n)
        m = n
        print("%.6f" %fun(n))
