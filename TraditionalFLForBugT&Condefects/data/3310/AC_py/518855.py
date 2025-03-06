# coding=utf-8
import math
while True :
    n=int(input())
    fx=0
    def f(x):
        if x==0:
            fx=math.sin(n)
        else :
            fx=math.sin(f(x-1))
        return fx
    if n==0:
        print('0.000000')
    else :
        print('%.6f'%f(n))
