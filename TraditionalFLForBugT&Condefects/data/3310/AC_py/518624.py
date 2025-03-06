# coding=utf-8
import math
while True:
    try:
        n=int(input())
        x=math.sin(n)
        if n>0:
            for i in range(1,n+1):
                x=math.sin(x)
        print("%.6f"%x)
    except:
        break
