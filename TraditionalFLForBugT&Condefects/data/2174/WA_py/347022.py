# coding=utf-8
s = raw_input().split()
x = raw_input().split()
a = float (s[0])
b = float (s[1])
c = float (x[0])
d = float (x[0])
if b==0:
    print ("error")
else :
    e = b/a
f=10*e
g=f%10
if g>=5:
    h= int(e)+1
    print h
else :
    print int(e)
if d==0:
    print ("error")
else :
    i = d/c
j=10*i
k=j%10
if k>=5:
    l= int(i)+1
    print l
else :
    print int(l)
