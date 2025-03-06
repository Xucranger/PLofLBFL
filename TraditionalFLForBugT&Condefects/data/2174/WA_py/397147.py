# coding=utf-8
while True:
    try:
        a, b = map(float, raw_input().split())
        if int(b) == 0:
            print 'error'
        else:
            print round(a / b)
    except EOFError:
        break
