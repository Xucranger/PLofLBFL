# coding=utf-8
import math
while True:
    n=input()
    n=int(n)
    x=n
    if x==0:
        a = math.sin(n)
    else:
        a=math.sin(n)
        while x>0:
            a=math.sin(a)
            x-=1
    print("%.6f"%a)
