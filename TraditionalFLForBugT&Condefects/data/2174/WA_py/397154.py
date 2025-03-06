# coding=utf-8
while True:
    try:
        in = raw_input()
        lst = in.split(' ')
        if int(lst[1]) == 0:
            s = "error"
            print s
        else:
            c = int(round(a/b))
            print c
    except EOFError:
        break
