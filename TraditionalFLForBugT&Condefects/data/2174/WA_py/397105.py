# coding=utf-8
while True:
    m=raw_input().split()
    a= int(m[0])
    b= int(m[1])
    # a,b=input().split()
    # a=int(a)
    # b=int(b)
    if b==0 :
        s='error'
        print s
    else:
        c=a/b
        d=c-int(c)
        if d>=0.5:
            c=int(c)+1
        else:
            c=int(c)
        print c
