# coding=utf-8
while True:
	a,b = input().split()
	a , b = int(a) , int(b)
	if (a-b>=2 or b - a>=2) and (a>=11 or b>= 11):
		print('GAME OVER')
	elif a==b and a == 10:
		if ((a+b) %2 == 0):
			print('A')
		else :
			print('B')
	elif a+b<=20:
		if (a+b)%4==0 or (a+b)%4==1:
			print('A')
		else:
			print('B')
