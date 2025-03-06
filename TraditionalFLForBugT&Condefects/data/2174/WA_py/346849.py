# coding=utf-8
a,b= (int(x) for x in raw_input().split(' '))
c,d=(int(x) for x in raw_input().split(' '))
if b==0:
    print("error")
else:
    print(a/b)
if d==0:
    print("error")
else:
    print(c/d)
