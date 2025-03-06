# coding=utf-8
while True:
    a,b=input().split()
    a,b=int(a),int(b)
    a=a%10
    b=b%10
    c=a*b
    if(c>=10):
        print(c%10)
    if(c<10):
        print(c)
