# coding=utf-8
n = int(input())
listt = list(list(map(int, input().split())) for i in range(n))
for line in listt:
    print(sum(line))
