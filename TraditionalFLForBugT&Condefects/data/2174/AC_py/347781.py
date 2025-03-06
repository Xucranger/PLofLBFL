# coding=utf-8
import math
while True :
    str_in = raw_input()
    if str_in == None :
        break
    a, b = [int(n) for n in str_in.split()]
    if b == 0 :
        print 'error'
    else :
        c = float(a) / b
        d = math.ceil(c)
        if d - c > 0.5 :
            d=int(d)
            print d-1
        else :
            d=int(d)
            print d
