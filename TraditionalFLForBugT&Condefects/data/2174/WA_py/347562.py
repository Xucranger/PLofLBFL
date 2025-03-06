# coding=utf-8
while True:
    try:
        a,b=(int(x) for x in raw_input().split())
        if b==0:
            print "error"
        else:
            print int(round(a/b+0.01))
    except:
        quit()
