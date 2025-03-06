# coding=utf-8
while True:
    try:
        a,b=(int(x) for x in input().split())
        if b==0:
            print "error"
        else:
            c=(a%b)/b
            if c>=0.5:
                print int(a/b)+1
            else:
                print int(a/b)
    except:
        quit()
