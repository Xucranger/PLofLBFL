# coding=utf-8
import math
while(1):
    n=int(input())
    N=n
    if(n==0):
        f=math.sin(0)
    else:
        f=math.sin(n)
        for i in range(N):
            f=math.sin(f)
    print('%.6f'%f)
