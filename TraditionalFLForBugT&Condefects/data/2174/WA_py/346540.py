# coding=utf-8
while True:
    try:
        s = raw_input()
        s = [int(x) for x in s.split(' ')]
        if s[1] == 0:
            print 'error'
        else:
            print round(s[0] / s[1])
    except EOFError:
        exit(0)
