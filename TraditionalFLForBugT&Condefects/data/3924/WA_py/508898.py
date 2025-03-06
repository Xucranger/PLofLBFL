# coding=utf-8
while True:
    a,b=input().split()
    a,b=int(a),int(b)
    c=a+b
    if a==b==0:
        print("A")
    if a==11 and b<=9:
        print("Game Over")
    if b==11 and a<=9:
        print("Game Over")
    if a>0 or b>0:
        if a<10 and b<10:
            if c%2==0:
                print("B")
            if c%2>0 or c%2<0:
                print("A")
        if a==10 and b==10:
            print("A")
        if a>10 and b>10:
            if c==2:
                print("Game Over")
            if c==1:
                print("A")
            if c==0:
                print("B")
