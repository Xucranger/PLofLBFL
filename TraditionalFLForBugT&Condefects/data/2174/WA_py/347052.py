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
    e = b/a
print int(round(e))
if d==0:
    print ("error")
else :
    i = d/c
print int(round(i))
