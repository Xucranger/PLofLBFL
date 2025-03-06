# coding=utf-8
while True:
    a,b=input().split()
    a=list(a)
    a.reverse()
    b=list(b)
    b.reverse()
    for i in range(0,1):
        for j in range (0,1):
            temp1=int(a[i])
            temp2=int(b[j])
            result=temp1*temp2
            print(result%10)
