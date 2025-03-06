# coding=utf-8
while True:
    try:
        m = raw_input().split()
        m[0] = float(m[0])
        m[1] = float(m[1])
        if m[1]==0.0:
            print('error')
        else:
            a = m[0]/m[1]
            a = a+0.5
            print(int(a))
    except EOFError:
        break
