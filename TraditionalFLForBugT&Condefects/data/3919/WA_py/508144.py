# coding=utf-8
while True:
    a,b,c=map(int,input().split())
    if a==b and a==c:
        print('DB')
    elif a==b or a==c or b==c:
        print('DY')
    elif a*a+b*b==c*c or a*a+c*c==b*b or b*b+c*c==a*a:
        print('ZJ')
    elif a+b>c and a+c>b and b+c>a:
        print('PT')
    else:
        print('ERROR')
