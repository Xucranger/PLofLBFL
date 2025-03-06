# coding=utf-8
S1={0,1,4,5,8,9,12,13,16,17,20}
S2={2,3,6,7,10,11,14,15,18,19}
while True:
    a,b=input().split()
    a=int(a)
    b=int(b)
    if a==11 or b==11:
        print("Game Over")
    elif (a+b) in S1 and a<10 and b<11:
        print("A")
    elif (a + b) in S2 and a <1 and b < 11:
        print("B")
    elif (a+b)%2==0 and a>=10 and b>=10:
        print("B")
    elif (a+b)%2==1 and a>=10 and b>=10:
        print("A")
    elif abs(a-b)==2:
        print("Game Over")
