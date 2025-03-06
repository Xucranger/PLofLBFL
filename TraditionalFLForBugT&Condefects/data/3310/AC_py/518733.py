# coding=utf-8
while True:
    A = int(input())
    import math
    for i in range(A+1):
        A = math.sin(A)
    print('%3f'%A)
