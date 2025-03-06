# coding=utf-8
while True:
    a,b=map(str,input().split())
    c=a[0]
    d=a[1:]
    e=d+c
    if b==e:
        print("Yes")
    else:
        print("No")
