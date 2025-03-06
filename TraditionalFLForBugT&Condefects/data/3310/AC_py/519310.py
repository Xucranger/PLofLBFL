# coding=utf-8
while True:
 n=int(input())
 import math
 s=math.sin(n)
 for i in range(n):
    s=math.sin(s)
 print("%.6f"%s)
