# coding=utf-8
N = 1000
for i in range(N):
    a,b = input().split()
    a_last = int(a[-1])
    b_last = int(b[-1])
    print(a_last * b_last)
