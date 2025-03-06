# coding=utf-8
while True:
    a,b=map(str,input().split())
    if len(a)==1:
        if a==b:
            print("Yes")
        else:
            print("No")
    else:
        c=a[0]
        d=a[1:]
        e=d+c
        if b==e:
            print("Yes")
        else:
            print("No")
