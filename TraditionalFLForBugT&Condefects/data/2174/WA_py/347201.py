# coding=utf-8
s=raw_input()
while s !='':
    a,b=s.split()
    if int(b)==0:
        print "error"
    else:print int(round(int(a)/int(b)))
    s=raw_input()
