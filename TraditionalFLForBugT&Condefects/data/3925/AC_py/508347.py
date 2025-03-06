# coding=utf-8
while True:
    s=input()
    l=len(s)
    i=0
    a=ord(s[l-1])-48
    for i in range(0,l):
        if s[i]==' ':
            b=ord(s[i-1])-48
        i+=1
    c=a*b%10
    print(c)
