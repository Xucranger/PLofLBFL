# coding=utf-8
while True:
    a = int(input())
    b = int(input())
    if b == 0:
        print("error")
    elif (a/b) - int(a/b) >= 0.5:
        print(int(a/b)+1)
    else:
        print(int(a/b))
