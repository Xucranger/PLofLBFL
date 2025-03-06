# coding=utf-8
while True:
    try:
        m = raw_input().split()
        a = float(m[0])
        b = int(m[1])
        if(b == 0):
            print 'error'
        else:
            print int(a / b + 0.5)
    except EOFError:
        break
