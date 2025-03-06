# coding=utf-8
import math
while True:
   n = eval(input())
   i = 0
   l = []
   l.append(math.sin(n))
   while i <= n:
      l.append(math.sin(l[i]))
      i += 1
   print('%f'%l[n])
