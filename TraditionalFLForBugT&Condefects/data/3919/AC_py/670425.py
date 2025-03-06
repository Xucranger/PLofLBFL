# coding=utf-8
while True:
    a, b, c = map(int, input().split())
    if a + b > c and a + c > b and b + c > a:
        if a == b and b == c and c == a:
            print("DB")
        elif a == b and a != c or b == c and b != a or c == a and c != b:
            print("DY")
        elif a * a + b * b == c * c or b * b + c * c == a * a or a * a + c * c == b * b:
            print("ZJ")
        else:
            print("PT")
    else:
        print("ERROR")
