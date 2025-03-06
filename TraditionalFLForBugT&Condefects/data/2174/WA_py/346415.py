# coding=utf-8
while(1):
    a, b = map(int, raw_input().split())
    if b == 0 :
        print("error\n")
    else :
        c = a / b * 1.0
        d = c - (a / b)
        if d < 0.5 :
            print(a / b)
        else :
            print((a / b) + 1,'\n')
