# coding=utf-8
while (True):
    m, n = input().split()
    m = int(m);
    n = int(n)
    if n < 11 and m < 11:
        if 0 <= (m + n) % 4 < 2:
            print("A")
        else:
            print("B")
    elif abs(m - n) >= 2:
        print("Game Over")
    elif (m + n - 20) % 2 == 0:
        print("A")
    elif (m + n - 20) % 2 == 1:
        print("B")
