# coding=utf-8
while True:
    a,b=input().split()
    a=int(a)
    b=int(b)
    for i in range(50):
            if ((a==11 and b<=9) or (a<=9 and b==11)) or ((a>=10 and b>=10) and (a==b+2 or b==a+2)):
                print("Game Over")
                break
            elif a+b==4*i-1:
                print('A')
            elif a+b==4*i:
                print('A')
            elif a+b==4*i-2:
                print('B')
            elif a+b==4*i-3:
                print('B')
