# coding=utf-8
while True:
    a,b=input().split()
    a1=a+a
    if a.find(b)!=-1 and len(b)==len(a):
        print("Yes")
    else:
        print("No")
