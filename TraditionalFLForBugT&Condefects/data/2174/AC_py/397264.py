# coding=utf-8
while True:
	m = raw_input().split() 
	m[0] = float(m[0])
	m[1] = float(m[1])
	if m[1] == 0:
		print 'error'
	else:
		x = int(m[0]/m[1]+0.5)
		print x
