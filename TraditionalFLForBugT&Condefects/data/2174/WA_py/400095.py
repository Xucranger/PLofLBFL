# coding=utf-8
import sys
for line in sys.stdin:
    a,b = map(int,line.split())
    if(b == 0):print('error')
    else:
        print(a//b)
