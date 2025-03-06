# coding=utf-8
while True:
    a,b=input.split()
    a=int(a)
    b=int(b)
    if a <= 9 and b <= 9:
        if (a + b) % 2 == 0:
            if (a + b) / 2 % 2 == 0:
                printf("A")
            else:
                printf("B")
        else:
            if ((a + b) / 2) and 1 != 0:
                printf("B")
            else:
                printf("A")
    else:
        if a == 11 and b == 9 or a == 9 and b == 11:
           printf("Game Over")
        else:
            if a - b >= 2 or b - a >= 2:
                printf("Game Over")
            else:
                if ((a + b) - 20) % 2 == 0:
                    printf("A")
                else:
                    printf("B")
