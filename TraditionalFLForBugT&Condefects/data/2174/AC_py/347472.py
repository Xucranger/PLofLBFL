# coding=utf-8
while True :
	num = raw_input()
	list = num.split()
	a = float(list[0]) 
	b = int(list[1])
	if b == 0 :
		print("error")
	else :
		print(int(a / b + 0.5))
