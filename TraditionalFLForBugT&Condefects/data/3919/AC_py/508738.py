# coding=utf-8
while True:
    a,b,c=input().split()
    a=int(a)
    b=int(b)
    c=int(c)
    if a==b and b==c:
        print("DB")
    elif a+b<=c or a+c<=b or c+b<=a:
        print("ERROR")
    elif a==b or a==c or b==c:
        print("DY")
    elif a*a+b*b==c*c or a*a+c*c==b*b or c*c+b*b==a*a:
        print("ZJ")
    elif a+b>c and a+c>b and c+b>a:
        print("PT")
