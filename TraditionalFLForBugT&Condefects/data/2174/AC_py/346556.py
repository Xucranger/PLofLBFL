# coding=utf-8
while True:
    try:
        s = raw_input()
        m = [int(x) for x in s.split(' ')]
        if m[1] == 0:
            print 'error'
        else:
            r = m[0] // m[1]
            y = m[0] % m[1]
            if y * 2 >= m[1]:
                r = r + 1
            print r
    except EOFError:
        exit(0)
