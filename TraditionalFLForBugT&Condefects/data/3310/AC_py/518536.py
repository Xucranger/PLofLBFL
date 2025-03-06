# coding=utf-8
import math
n = input()
while n:
    m = math.sin(float(n))
    for i in range(0,int(n)):
        m = math.sin(m)
    print("%.6f"%m)
    n = input()
