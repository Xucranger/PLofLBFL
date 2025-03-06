# coding=utf-8
while True:
    str = input()
    a,b = (float(x) for x in str.split())
    if b == 0:
        print("error")
    elif (a/b) - int(a/b) >= 0.5:
        print(int(a/b)+1)
    else:
        print(int(a/b))
