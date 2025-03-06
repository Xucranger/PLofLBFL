# coding=utf-8
while True:
    a,b = map(int, input().split())
    if b == 0:
       print "error"
    else:
        print int(round(a/b))
