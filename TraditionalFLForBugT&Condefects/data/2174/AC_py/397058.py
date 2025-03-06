# coding=utf-8
while 1:
    exp=raw_input()
    for i in range(0,len(exp)):
        if exp[i]==' ':
            a=float(exp[0:i])
            b=float(exp[i:len(exp)])
            if b==0:
                print('error')
            else:
                print(int(a/b+0.5))
        else:
            continue
