# coding=utf-8
while True:
	try:
		num=raw_input().split()
		a=float(num[0])
		b=float(num[1])
		if b==0:
			print("error")
		else:
			print(round(a/b))
	except EOFError:
		break
