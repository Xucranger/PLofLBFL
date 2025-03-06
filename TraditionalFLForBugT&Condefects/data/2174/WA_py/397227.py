# coding=utf-8
while True:
    try:
        a,b = map(int, raw_input().split())
        a = float(a)
        b = float(b)
        if b == 0:
            s = 'error'
            print s
        else:
            c = int(a/b)
            d = float(a/b)
            if c-d>=0.5:
                c+=1
            print c
    except EOFError:
        break 
