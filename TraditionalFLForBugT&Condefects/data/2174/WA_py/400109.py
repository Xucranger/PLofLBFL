# coding=utf-8
while True:
    try:
        a,b = map(int,raw_input().strip().split())
        if(b==0):print('error')
        else:print(int(round(a/b)))
    except EOFError:
        break
