# coding=utf-8
#!/usr/bin/env python3
# coding=utf-8
while True:
	try:
		p = input ()
		s = int (p.split (' ')[0])
		k = int (p.split (' ')[1])
		s = int (s)
		k = int (k)
		if k == 0:
			print ('error')
		else:
			print (round (s / k))
	except EOFError:
		break
