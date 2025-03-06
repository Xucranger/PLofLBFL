# coding=utf-8
import sys
for line in sys.stdin:
    if line == "":break
    a,b = map(int,line.strip().split())
    if(b == 0):print("error")
    else:
        if(a/b>0):
            print(int(a/b+0.5))
        else:
            print(int(a/b-0.5))
