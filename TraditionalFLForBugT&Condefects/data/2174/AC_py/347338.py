# coding=utf-8
while True:
    try:
        m,n = map(float,raw_input().split())
        if n == 0:
            print "error"
        else:
            print int(round(m / n))
    except EOFError:
        exit(0)
