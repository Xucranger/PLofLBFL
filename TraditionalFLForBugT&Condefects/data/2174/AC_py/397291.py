# coding=utf-8
while True:
	try:
		p=raw_input().split()
		n=float(p[0])
		m=float(p[1])
		if(m==0):
			print("error")
		else:
			print(int(n/m+0.5))
	except EOFError:
		break
