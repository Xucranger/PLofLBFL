# coding=utf-8
a,b,c=map(int,input().split())
while True:
    if (a+b<=c) or (a+c<=b) or (b+c<=a):
        print('ERROR')
    else:
        if a==b==c:
            print('DB')
     else:
            if (a==b and b!=c) or (a==c and a!=b) or (b==c and c!=a) :
                print('DY')
            else:
                if (a!=c and a!=b and b!=c) and (a*a+b*b==c*c or a*a+c*c==b*b or b*b+c*c==a*a) :
                    print('ZJ')
                 else:
                    print('PT')
    a,b,c=map(int,input().split())
