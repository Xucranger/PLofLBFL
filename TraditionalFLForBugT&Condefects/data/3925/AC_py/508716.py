# coding=utf-8
a,b=input().split()
l=[]
n=[]
while a!="":
    for i in a:
        l.append(i)
    l.reverse()
    c=l[0]
    for j in b:
         n.append(j)
    n.reverse()
    d=n[0]
    m=int(c)*int(d)
    if m>=10:
        m=m%10
    print(m)
    a,b=input().split()
