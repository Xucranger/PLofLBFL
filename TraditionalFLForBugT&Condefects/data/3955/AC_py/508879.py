# coding=utf-8
a,b=input().split()
while a!="":
    j=0
    t=0
    l=[]
    for i in a:
        l.append(i)
        j=j+1
    for k in range(0,j):
        c=""
        i=l[0]
        l.pop(0)
        l.append(i)
        for o in l:
            c=c+o
        if c==b:
            print("Yes")
            t=1
    if t==0:
        print("No")
    a,b=input().split()
