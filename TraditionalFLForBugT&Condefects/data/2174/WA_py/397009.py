# coding=utf-8
while True:
    m=input().split()
    m[0]=float(m[0])
    m[1]=float(m[1])
    if m[1]==0:
        print("error")
    else:
        n=m[0]/m[1]
        p=int(n)
        if n-p>=0.5:
            print(p+1)
        else:
            print(p)
