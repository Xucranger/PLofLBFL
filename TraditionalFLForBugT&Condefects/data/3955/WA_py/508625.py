# coding=utf-8
while True:
    n,m=input().split()
    count=1
    for i in range(len(n)):
        if n[i]!=m[len(m)-1-i]:
            count=0
    if count==1:
        print("Yes")
    elif count==0 :
        print("No")
