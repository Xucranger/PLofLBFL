# coding=utf-8
while True:
    try:
        s = [int(x) for x in raw_input().split(' ')]
        if s[1] == 0:
            print 'error'
        else:
            print s[0] / s[1]
    except EOFError:
        exit(0)
