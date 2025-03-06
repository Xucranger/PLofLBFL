# coding=utf-8
while True:
    a,b,c=map(int,input().split())
    if(a==b==c):
        print("db")
    elif(a==b or b==c or a==c):
            print("dy")
    elif(a*a+b*b==c*c or a*a+c*c==b*b or b*b+c*c==a*a):
        print("zj")
    elif(a+b>c or a+c>b or b+c>a):
        print("pt")
    else:
        print("ERROR")
