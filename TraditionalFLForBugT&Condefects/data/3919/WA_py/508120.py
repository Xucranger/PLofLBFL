# coding=utf-8
a,b,c=input().split()
a=int(a)
b=int(b)
c=int(c)
if a+b>=c and a+c>=b and b+c>=a:
    if a==b and a==c and b==c:
        print('DB')
    elif a==b or a==c or b==c:
        print('DY')
    elif a*a+b*b==c*c or a*a+c*c==b*b or b*b+c*c==a*a:
        print('ZJ')
    else:
        print('PT')
else:
    print('ERROR')
