# coding=utf-8
from __future__ import division
while True:
    a, b = map(int, raw_input().split())
    if b == 0:
        print('error')
    else:
        print(int(round(a / b)))
