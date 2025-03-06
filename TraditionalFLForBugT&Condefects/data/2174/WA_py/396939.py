# coding=utf-8
a,b=map(int,input().split())
while a!='':
	if b==0:
		print("error")
	else :
		print((int)(a/b))
	a,b=map(int,input().split())
