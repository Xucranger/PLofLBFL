# coding=utf-8
a, b=raw_input( ).split( )
c, d=raw_input( ).split( )
a=float(a)
b=float(b)
c=float(c)
d=float(d)
if b != 0 :
    x = round(a / b)
    x = int(x)
    print x
else :
    print "error"
if d != 0 :
    y = round(c / d)
    y = int(y)
    print y
else :
    print "error"
