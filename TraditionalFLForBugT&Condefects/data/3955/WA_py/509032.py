# coding=utf-8
while True:
    a,b=input().split()
    c=""
    for i in range(len(a)):
        c=a[i:]+a[:i]
        if(c==b):
            print("YES")
            break
    else:
        print("NO")
