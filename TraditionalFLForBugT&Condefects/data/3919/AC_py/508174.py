# coding=utf-8
a,b ,c=map(int,input().split())
while a!='':
    if a + b <= c or a + c <= b or b + c <= a:
        print('ERROR')
    else:
        if a == b and a == c:
            print('DB')
        else:
            if a == b or a == c or b == c:
                print('DY')
            else:
                if a ** 2 + b ** 2 == c ** 2 or a ** 2 + c ** 2 == b ** 2 or b ** 2 + c ** 2 == a ** 2:
                    print('ZJ')
                else:
                    print('PT')
    a, b, c = map(int, input().split())
