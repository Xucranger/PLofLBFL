# coding=utf-8
while True:
    m=raw_input().split()
    m[0]=int(m[0])
    m[1]=int(m[1])
    if m[1]==0:
        print("error")
    else:
        a=float(m[0])
        b=float(m[1])
        if a/b-m[0]/m[1]>=0.5:
            print(m[0]/m[1]+1)
        else:
            print(m[0]/m[1])
