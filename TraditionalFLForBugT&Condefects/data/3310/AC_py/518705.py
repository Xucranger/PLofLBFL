# coding=utf-8
import math
while True:
    n=int(input())
    if n==0:
     a = math.sin(n)
    else:
      a = math.sin(n)
      for i in range(1,n+1):
        a=math.sin(a)
    print("%.6f"%a)
