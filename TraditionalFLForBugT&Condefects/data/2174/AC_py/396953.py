# coding=utf-8
while True:
    s = raw_input().split()
    s[0] = float(s[0])
    s[1] = float(s[1])
    if s[1] == 0.0:
        print 'error'
    else:
        res = s[0] / s[1]
        res += 0.5
        print int(res)
