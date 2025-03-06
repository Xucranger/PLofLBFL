# coding=utf-8
import math
while True:
    n=int(input())
    f0=math.sin(n)
    b=0
    def shui(sheng):
        d=math.sin(sheng)
        return d
    for i in range(n):
        b=shui(f0)
        f0=b
    e=round(f0,6)
    print("%.6f" % e)
