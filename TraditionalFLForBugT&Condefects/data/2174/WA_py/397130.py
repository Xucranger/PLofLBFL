# coding=utf-8
while True:
    m=raw_input().split()
    a= int(m[0])
    b= int(m[1])
    if b==0 :
        s='error'
        print s
    else:
        c=int(round(a/b))
        print c
