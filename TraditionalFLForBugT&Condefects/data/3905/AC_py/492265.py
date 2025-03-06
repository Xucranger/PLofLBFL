# coding=utf-8
N=eval(input())
for i in range(N):
    m=input().strip().split()
    s=0
    for j in m:
        s+=int(j)
    print(s-int(m[0]))
