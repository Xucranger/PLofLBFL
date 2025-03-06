# coding=utf-8
import math
while 1:
    s=int(input())
    if(s==0):
        x=0
        print('%.6f'%x)
    else:
        y=0
        x=s
        for i in range(s):
            x=math.sin(x)
        y=math.sin(x)
        print('%.6f'%y)
