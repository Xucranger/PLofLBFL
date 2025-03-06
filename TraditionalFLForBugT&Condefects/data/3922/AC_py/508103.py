# coding=utf-8
# this is a new learning program
while True:
    a, b = input().split()
    a, b = int(a), int(b)
    if b == 0:
        print('error')
        continue
    else:
        print(int(a/b+0.5))
