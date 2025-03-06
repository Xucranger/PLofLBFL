# coding=utf-8
while True:
    a,b = raw_input().split()
    a = int(a)
    b = int(b)
    if b==0:
        print("error")
    else:
        print(a//b)
