# coding=utf-8
f=1
while f==1:
    a,b=input().split()
    a=int(a)
    b=int(b)
    if b==0:
        print("error")
    else:
        c=a*1.0/b+0.5
        print(c)
