# coding=utf-8
import sys
import math
for line in sys.stdin:
    N = int(line)
    s_N = 0
    for i in range(0, N+1):
        if i == 0:
            s_N = math.sin(N)
        else:
            s_N = math.sin(s_N)
    print("%.6f" % s_N)
