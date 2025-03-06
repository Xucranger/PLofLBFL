# coding=utf-8
while True:
    str = input()
    a,b = (float(x) for x in str.split())
    if b == 0:
        print("error")
    else:
        print(int(a/b+0.5))
