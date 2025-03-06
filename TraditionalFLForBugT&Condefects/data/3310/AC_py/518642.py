# coding=utf-8
import math
while True:
    n=int(input())
    if n==0:
        f=math.sin(n)
    else:
        f=math.sin(n)
        for i in range(1,n+1):
            f=math.sin(f)
    print("%.6f"%f)
