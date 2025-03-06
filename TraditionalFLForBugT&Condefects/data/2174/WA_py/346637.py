# coding=utf-8
a,b=raw_input().split()
c,d=raw_input().split()
a = int(a)
b = int(b)
c = int(c)
d = int(d)
if b!=0:
    print(int(round(a/b)))
else:
    print("error")
if d!=0:
    print(int(round(c/d)))
else:
    print("error")
