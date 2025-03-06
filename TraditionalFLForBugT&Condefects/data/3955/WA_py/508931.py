# coding=utf-8
while True:
    a,b=input().split()
    a_double=a+a
    if b in a_double:
        print("YES")
    else:
        print("NO")
