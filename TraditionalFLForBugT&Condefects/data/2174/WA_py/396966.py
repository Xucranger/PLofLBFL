# coding=utf-8
while True :
    num = raw_input().split(' ');
    a = int(num[0]);
    b = int(num[1]);
    if b == 0 :
        print("error");
    else:
        print(int(a / b));
