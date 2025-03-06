# coding=utf-8
while True:
    n=int(input())
    a=n
    import math
    for i in range(n+1):
        a=math.sin(a)
    print('%.6f'%a)
