# coding=utf-8
while True:
    try:
        a,b = map(int, raw_input().split())
        b = int(b)
        if b == 0:
            s = 'error'
            print s
        else:
            c = int(round(a/b))
            print c
    except:
        break
