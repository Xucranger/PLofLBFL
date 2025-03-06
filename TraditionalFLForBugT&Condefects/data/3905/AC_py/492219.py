# coding=utf-8
n=eval(input())
for i in range(n):
    m=input().strip().split()
    sum=0
    for j in m:
        sum=int(sum)+int(j)
    print(int(sum)-int(m[0]))
