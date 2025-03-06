# coding=utf-8
while True:
    a, b = map(int, raw_input().split())
    if b == 0:
        print('error')
    else:
        print(a // b)
