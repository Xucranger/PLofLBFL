# coding=utf-8
while True:
    a, b = input().split()
    a, b = int(a), int(b)
    if abs(a-b) >= 2 and (a >= 11 or b >= 11):
        print('Game Over')
    elif a < 10 or b < 10:
        if (a+b) % 4 == 0 or (a+b-1) % 4 == 0:
            print('A')
        else:
            print('B')
    else:
        if (a+b) % 2 == 0:
            print('A')
        else:
            print('B')
