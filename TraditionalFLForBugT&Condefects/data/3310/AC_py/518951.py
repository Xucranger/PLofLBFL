# coding=utf-8
import math
while True:
        a=int(input())
        if(a==0):
                x=0
                print("%.6f"%x)
        else:
                y=0
                x=a
                for i in range(0,a):
                        x=math.sin(x)
                y=math.sin(x)
                print("%.6f"%y)
