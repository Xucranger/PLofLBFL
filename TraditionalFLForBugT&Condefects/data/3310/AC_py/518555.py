# coding=utf-8
import math
while True:
    n=input()
    n=int(n)
    f=n
    for i in range(0,n+1):
        f=math.sin(f)
    print('%.6f' %f)
