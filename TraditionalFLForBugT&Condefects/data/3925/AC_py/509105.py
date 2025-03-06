# coding=utf-8
while True:
    a,b=input().split()
    a=int(a)
    b=int(b)
    d=a//10
    y=b//10
    s=(a-10*d)*(b-10*y)
    if s%10==0:
        print('0')
    else:
        k1=s/10
        k2=s//10
        print(int(10*(k1-k2)))
