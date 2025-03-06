# coding=utf-8
while True :
    try:
        num = raw_input().split();
        a = float(num[0]);
        b = float(num[1]);
        if b == 0:
            print("error");
        else:
            res = a / b;
            num = int(res * 10);
            if num % 10 >= 5:
                res = res + 1;
            print(int(res));
    except EOFError:
        break;
