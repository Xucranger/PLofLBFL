# coding=utf-8
while True:
    m = row_input().split()
    a = float(m[0])
    b = float(m[1])
    if b == 0:
        print("error")
    else:
        x =  int(a/b+0.5)
        print(x)
