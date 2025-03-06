# coding=utf-8
# -*- coding:utf-8 -*-
import math
def solution(n, x):
    if x == 0:
        return math.sin(n)
    return math.sin(solution(n, x - 1))
if __name__ == '__main__':
    for i in range(20):
        n = input()
        n = int(n) if n != '' else exit()
        print('%0.6f' % solution(n, n))
