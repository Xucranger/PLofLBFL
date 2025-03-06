# coding=utf-8
k=1
p=1
while True:
    a,b=input().split()
    if len(a)!=len(b):
        print("No")
        p=0
    elif len(a)==0 and len(b)==0:
        print('Yes')
        p=0
    elif len(a)==1 and len(b)==1 and a==b:
        print('Yes')
        p=0
    if p==1:
        for j in range(len(a)):
            i=0
            for i in range(len(a)):
                if k==1:
                    f=a[i]
                    k--
                a[i]=a[i+1]
                if i==len(a)-2:
                    a[len(a)-1]=f;k++;break
            if a==b:
                print('Yes');q=1;break
        if q!=1:
            print('No')
