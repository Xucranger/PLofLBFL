# coding=utf-8
n=int(input())
for i in range(n):
    sum=0
    s=[int(j) for j in input().split()]
    for j in s[1:]:
        sum=sum+j
    print(sum)
