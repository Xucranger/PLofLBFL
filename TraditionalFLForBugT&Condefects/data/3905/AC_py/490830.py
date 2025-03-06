# coding=utf-8
for _ in range(int(input())):
    line = (input().strip().split())
    line_sum = 0
    for i in range(len(line)):
        line_sum += int(line[i])
    line_sum -= int(line[0])
    print(line_sum)
