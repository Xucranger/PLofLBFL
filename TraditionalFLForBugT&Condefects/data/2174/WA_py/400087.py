# coding=utf-8
try:
    while True:
        a,b = map(int,input().split())
        if(b == 0):print('error')
        else: print(int(a/b+0.5))
except EOFError:
    pass
