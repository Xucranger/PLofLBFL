# coding=utf-8
while True:
    n = int(input())
    import math
    for i in range(n+1):
        n = math.sin(n)
    print("%.6f" % n)
