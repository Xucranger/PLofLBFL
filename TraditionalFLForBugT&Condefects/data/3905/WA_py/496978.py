# coding=utf-8
n=int(input())
for i in range(n):
   m=input().split()
   s=0
   for j in m:
    s+=int(j)
    print(s-int(m[0]))
