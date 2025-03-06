# coding=utf-8
while True:
    try:
        a, b = map(int, raw_input().split())
        if b == 0:
            print 'error'
        else:
            print int(a / b + 0.5)
    except EOFError:
        break
