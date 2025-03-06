# coding=utf-8
a, b=raw_input( ).split( )
a=float(a)
b=float(b)
while a != "" :
    if b != 0 :
        x = round(a / b)
        x = int(x)
        print x
    else :
        print "error"
    a, b=raw_input( ).split( )
    a=float(a)
    b=float(b)
