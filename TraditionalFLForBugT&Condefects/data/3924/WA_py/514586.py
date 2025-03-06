# coding=utf-8
while(1):
    a,b=map(int,input().split())
    c=a+b
    d=c/2
    e=d%2
    if((a>=11 and a-b==2)or(b>=11 and b-a==2)):
        print("Game Over")
    elif(e==0):
        print("A")
    elif(e!=0):
        print("B")
