# coding=utf-8
while True:
    m=raw_input().split()
    a=int(m[0])
    b=int(m[1])
    if b==0:
        print("error")
    else:
        tempa=float(a)
        tempb=float(b)
        if tempa/tempb-a/b>=0.5:
            print(a/b+1)
        else:
            print(a/b)
