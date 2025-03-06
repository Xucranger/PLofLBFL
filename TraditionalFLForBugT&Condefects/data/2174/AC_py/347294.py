# coding=utf-8
while True:
	try:
		a = raw_input()
		n = [int(x) for x in a.split(' ')]
		if n[1] == 0:
			print 'error'
		else:
			r = n[0] // n[1]
			y = n[0] % n[1]
			if y * 2 >= n[1]:
				r = r + 1
			print r
	except EOFError:
		exit(0)
