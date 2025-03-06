# coding=utf-8
a,b=map(int,input().split())
while a!='':
	if b==0:
		print("error")
	else :
		x=float(a/b)
		y=round(x,0)
		print((int)(y))
	a,b=map(int,input().split())
