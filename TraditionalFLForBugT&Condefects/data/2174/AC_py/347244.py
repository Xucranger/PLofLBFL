# coding=utf-8
while True:
    try:
        a,b=map(float,raw_input().split())
        if b==0:
            print "error"
        else:
            print int(round(a/b))
    except EOFError:
        exit(0)
