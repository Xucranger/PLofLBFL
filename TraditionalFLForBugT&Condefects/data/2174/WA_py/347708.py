# coding=utf-8
while True:
    a,b = raw_input().split()
    a = int(a)
    b = int(b)
    if b!=0:
        if a/b ==2.5:
            print("3")
        else:
            print(int(round(a/b)))
    else:
        print("error")
