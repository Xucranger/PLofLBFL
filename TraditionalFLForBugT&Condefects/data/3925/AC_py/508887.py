# coding=utf-8
while True:
    n1,n2=input().split( )
    n1=str(n1)
    n2=str(n2)
    a=int(n1[-1])
    b=int(n2[-1])
    c=a*b
    if c<10:
        print(c)
    else:
        print(c%10)
