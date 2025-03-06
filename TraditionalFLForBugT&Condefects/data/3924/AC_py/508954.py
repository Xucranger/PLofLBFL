# coding=utf-8
while True:
    a,b=input().split()
    a=float(a)
    b=float(b)
    s=a+b
    y=abs(a-b)
    if s<20:
        x=s/2
        x=int(x)
        if x%2!=0:
            print("B")
        else:
            print("A")
    elif (a==11 and s==20) or (b==11 and s==20):
        print("Game Over")
    elif y>=2:
        print("Game Over")
    elif a==10 and b==10:
        print("A")
    elif s>20:
        if y==1:
            print("B")
        elif y==0:
            print("A")
