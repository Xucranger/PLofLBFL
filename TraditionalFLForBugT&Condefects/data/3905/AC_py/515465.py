# coding=utf-8
n=int(input())
i=0
while i<n:
    a=input()
    num=[int(n) for n in a.split()]
    print(sum(num[1:]))
    i+=1 
