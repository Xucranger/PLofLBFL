# coding=utf-8
while True:
    try:
        a,b = raw_input().split()
        a = int(a)
        b = int(b)
        if b==0:
            print("error")
        else:
            c = a/b
            print("%.0f" %(c))
    except:
        break
