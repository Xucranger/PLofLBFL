# coding=utf-8
a,b=input().split()
a=int(a)
b=int(b)
while a!="":
    if a==11and a-b>=2 or b==11 and b-a==2:
        print("Game Over")
    else:
        if   a+b>=20:
            c=a+b-20
            c=int(c)
            if c%2==0:
                print("A")
            else:
                print("B")
        else:
            if ((a+b)/2)%2==0:
                 print('A')
            else:
                 print("B")
    a,b=input().split()
    a=int(a)
    b=int(b)
