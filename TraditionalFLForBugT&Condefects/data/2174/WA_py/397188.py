# coding=utf-8
while True:
    try:
        a=int(raw_input().split())
        if a[1]==0:
            print "error"
        else:
            print round(a[0] / a[1])
    except EOFError:
        break
