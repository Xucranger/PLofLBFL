# coding=utf-8
import math
def F_x(a,b):
    if a!=0:
        return math.sin(F_x(a-1,b))
    else :
        return math.sin(b)
while True:
    a=input()
    a=float(a)
    b=a
    b=F_x(a,b)
    print("%.6f"%(b))
