# coding=utf-8
s = raw_input().split()
x = raw_input().split()
a = float (s[0])
b = float (s[1])
c = float (x[0])
d = float (x[1])
if b==0:
    print ("error")
else :
    e = a/b
    f=100*e
    g= (int (f))%100
if g>=50:
    h= int(e)+1
    print h
else :
    print int(e)
if d==0:
    print ("error")
else :
    i = c/d
    j=100*i
    k= (int (j))%100
if k>=50:
    l= int(i)+1
    print l
else :
    print int(i)
