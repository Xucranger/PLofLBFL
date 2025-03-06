# coding=utf-8
import math
while True:
    n=int(input())
    if n==0:
        x=0
        print('%.6f'%x)
    else:
        y=0
        x=n
        for i in range(n):
            x=math.sin(x)
        y=math.sin(x)
        print('%.6f'%y)
