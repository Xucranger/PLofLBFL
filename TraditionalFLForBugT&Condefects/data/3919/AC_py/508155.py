# coding=utf-8
while True:
    a,b,c=map(int,input().split())
    if a+b<c or a+c<b or b+c<a:
        print('ERROR')
    else:
        if a==b and b==c:
            print('DB')
        elif a==b or b==c or a==c:
            print('DY')
        elif a*a+b*b==c*c or a*a+c*c==b*b or c*c+b*b==a*a:
            print('ZJ')
        else:
            print('PT')
