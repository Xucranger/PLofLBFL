# coding=utf-8
while True :
    a,b=map(int,raw_input().split())
    if b==0 :
        print("error")
    else :
        p=float(a/b)
        q=int(round(p))
        print(q)
