# coding=utf-8
while True:
    a,b,c=input().split()
    a,b,c=int(a),int(b),int(c)
    if(a*a+b*b==c*c or a*a+c*c==b*b or b*b+c*c==a*a):
        print('ZJ')
    elif(a==b and b==c):
        print('DB')
    elif((a==b or b==c or c==a) and (a+b>c and a+c>b and b+c>a)):
        print('DY')
    elif(a+b>c and a+c>b and b+c>a):
        print('PT')
    else:
        print('ERROR')
