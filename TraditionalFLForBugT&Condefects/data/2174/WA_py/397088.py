# coding=utf-8
while True:
	try:
		s = input()
		k = s.split()
		a = int(k[0])
		b = int(k[1])
		if b == 0:
			print("error")
		else:
			print(int(a/b + 0.5))
	except EOFError:
		break
