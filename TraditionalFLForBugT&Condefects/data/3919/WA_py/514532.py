# coding=utf-8
while(1):
    a,b,c=map(int,input().split())
    if(a>=b):
        d=a
        a=b
        b=d
    if(a>=c):
        d=a
        a=c
        c=d
    if(b>=c):
        d=b
        b=c
        c=d
    if(a==b and a==c):
        print("DB")
    elif((a==b and a!=c)or(b==c and b!=a)):
        print("DY")
    elif(a*a+b*b==c*c and a!=b):
        print("ZJ")
    elif(a+b>c and a+c>b and b+c>a and c-a<b and c-b<a and b-a<c):
        print("PT")
    else:
        print("ERROR")
