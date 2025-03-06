# coding=utf-8
while(True):
    a,b = input().split()
    a = int(a); b = int(b)
    if a<11 and b < 11 :
        if 0 <= (a+b)%4 < 2 :
            print("A")
        else:
            print("B")
    elif abs(a-b)>=2 :
        print("Game Over")
    elif (a+b-20)%2 == 0:
        print("A")
    elif (a+b-20)%2 == 1:
        print("B")
