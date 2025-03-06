# coding=utf-8
while True:
    a,b=input().split()
    a=int(a)
    b=int(b)
    if b==0:
        print("error")
    else:
        c=a/b
        d=a//b
        if (c-d)*2>=1:
            print(d+1)
        else:
            print(d)
