# coding=utf-8
while True:
	try:
		p=input().split()
		n=int(p[0])
		m=int(p[1])
		if(m==0):
			print("error")
		else:
			print(int(n/m+0.5))
	except EOFError:
		break
