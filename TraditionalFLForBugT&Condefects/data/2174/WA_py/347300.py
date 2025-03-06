# coding=utf-8
while True:
    try:
        str = raw_input()
	m = [int(x) for x in str.split(' ')]
	if m[1] == 0:
	    print "error"
	else:
            print int(round(m[0] / m[1]))
    except EOFError:
        exit(0)
