# coding=utf-8
while True:
    a,b = map(int, input().split())
    b = int(b)
    if b == 0:
        s = 'error'
        print s
    else:
        c = int(round(a/b))
        print c
