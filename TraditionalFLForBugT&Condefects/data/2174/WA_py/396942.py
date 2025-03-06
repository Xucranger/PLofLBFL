# coding=utf-8
while True:
    try:
        arr = input()
        arr = arr.split(' ')
        x = int(arr[0])
        y = int(arr[1])
        if(y == 0):
            print('error')
        else:
            print(round(x/y))
    except:
        break
