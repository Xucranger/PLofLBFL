# coding=utf-8
while True:
	try:
		num=input().strip().split()
		a=int(num[0])
		b=int(num[1])
		if b==0:
			print("error")
		else:
			print(round(a/b))
	except EOFError:
		break
