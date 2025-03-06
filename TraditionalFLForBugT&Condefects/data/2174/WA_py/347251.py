# coding=utf-8
a1,a2 = map(int,input().split())
b1,b2 = map(int,input().split())
if b1==0:
    print("Error")
else:
        c1=a1/b1
        print(round(c1))
if b2==0:
        print("Error")
else:
        c2=a2/b2
print(round(c2))
