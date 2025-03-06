# coding=utf-8
while True:
    a,b = raw_input().split()
    a = int(a)
    b = int(b)
    if b!=0:
        print(int(round(a/b)))
    else:
        print("error")
