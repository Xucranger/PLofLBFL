# coding=utf-8
n = eval(input())
for i in range(n):
    m = input().strip().split()
    s = 0
    for j in m:
        if j > 0:
            s += int(j)
    print(s)
