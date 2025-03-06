# coding=utf-8
import math
stopword = ''
for line in iter(input,stopword):
    q = eval(line)
    ans = q
    for b in range(q+1):
        ans = math.sin(ans)
    print("%.6f" %ans)
