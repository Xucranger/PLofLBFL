# coding=utf-8
while True :
    a,b,c=input().split()
    a=int(a)
    b=int(b)
    c=int(c)
    if a+b<=c or b+c<=a or a+c<=b :
        print("ERROR")
    elif a==b==c :
        print("DB")
    elif a==b or b==c or a==c :
        print("DY")
    elif a*a +b*b==c*c or a*a+c*c==b*b or b*b+c*c==a*a:
        print("ZJ")
    elif a+b>c or b+c>a or a+c>b:
        print("PT")
