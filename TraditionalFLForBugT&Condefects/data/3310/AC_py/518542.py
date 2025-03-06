# coding=utf-8
import math
a=int(input())
while a!="":
    s=math.sin(a)
    i=0
    while i<a:
         s=math.sin(s)
         i=i+1
    print("%.6f"%s)
    a=int(input())
