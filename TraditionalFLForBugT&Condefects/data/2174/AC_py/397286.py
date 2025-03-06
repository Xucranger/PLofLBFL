# coding=utf-8
while 1:
	m=raw_input().split() 
	n1=float(m[0])
	n2=float(m[1])
	if n2==0:
		print 'error'
	else:
		x=int(n1/n2+0.5)
		print x
