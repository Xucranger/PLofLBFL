# coding=utf-8
while True:
    a,b=map(int,raw_input().split())
    if b==0 :
        s='error'
        print s   
    else:
        a=float(a)
        b=float(b)
        c=a/b+0.5
        c=int(c)
        print (c)
