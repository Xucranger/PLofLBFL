# coding=utf-8
from math import sin
def findda(m,n):
    m = int(m)
    n = int(n)
    if m == 0:
        return sin(n)
    return sin(findda(m-1,n))
while True:
    a = input()
    a = int(a)
    b = a
    s = findda(a,b)
    print('%.6f'%s)
