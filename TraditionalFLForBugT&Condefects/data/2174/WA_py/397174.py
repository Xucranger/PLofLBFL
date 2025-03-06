# coding=utf-8
while True:
    try:
        num = raw_input().split(" ")
        if num[1] == '0':
            print "error"
        else:
            res = int(1.0*float(num[0]) / float(num[1]) + 0.5)
            print res
    except EOFError:
        break
