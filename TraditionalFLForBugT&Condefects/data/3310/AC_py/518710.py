# coding=utf-8
import math
while True:
     n = int(input())
     for i in range(n+1):
         n = math.sin(n)
     print("%.6f"%n)
