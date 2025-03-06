# coding=utf-8
while True :
    str_in = raw_input()
    if str_in == None :
        break
    a, b = [int(n) for n in str_in.split()]
    if b == 0 :
        print 'error'
    else :
        c = a / b
        d = int(c)
        if c - d < 0.5 :
            print d
        else :
            print d + 1
