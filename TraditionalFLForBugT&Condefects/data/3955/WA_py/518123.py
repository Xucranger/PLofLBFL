# coding=utf-8
while True:
    a,b=input().split()
    k=1
    if len(a)!=len(b):
        print('NO')
        k=0
    elif len(a)==len(b)==0:
        print('YES')
        k=0
    if k==1:
        list=[]
        list.append(a)
        for i in range(1,len(a)-1):
            list.append(a[i]+a[i+1:]+a[:i])
        list.append(a[-1]+a[:len(a)-1])
        if b in list:
            print('YES')
        else:
            print('NO')
