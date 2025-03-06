# coding=utf-8
while True:
    try:
        a,b = map(int,input().split())
        if(b == 0):
        	print('error')
        else:
        	print(round(a / b))
    except EOFError:
        break;
