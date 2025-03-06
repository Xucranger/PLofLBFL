# coding=utf-8
while True:
    import math
    n=int(input())
    f=math.sin(n)
    i=0
    while i<n:
        f=math.sin(f)
        i=i+1
    print('%.6f'%f)
