# coding=utf-8
while True :
    a,b= (float(x) for x in raw_input().split(' '))
    if b==0 :
        print("error")
    else :
        p=float(a/b)
        n=int(a/b)
        c=float(p-n)
        if c>0.5:
            print(n+1)
        else :
            print(n)
