# coding=utf-8
def deal(s):
    a = s[0]
    b = s[1]
    if b == 0:
        print 'error'
    else:
        c = a // b
        if(a%b) * 2 >= b:
            c = c + 1
        print c
while True:
    try:
        s = raw_input()
        s = [int(x) for x in s.split(' ')]
        deal(s)
    except EOFError:
        exit(0)
