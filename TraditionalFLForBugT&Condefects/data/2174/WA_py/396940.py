# coding=utf-8
while True:
    try:
        num = input().split(" ")
        if num[1] == '0':
            print("error")
        else:
            res = int(int(num[0]) / int(num[1]) + 0.5)
            print(res)
    except EOFError:
        break
