# coding=utf-8
while True:
    a,b=input().split()
    a=int(a)
    b=int(b)
    if a<11 and b<11:
        if ((a+b)/2)%2<1:
            print("A")
        else:
            print("B")
    elif abs(a-b)<2:
        if (a+b)%2==0:
            print("A")
        else:
            print("B")
    else:
        print("Game Over")
