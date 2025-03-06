# coding=utf-8
a,b=map(float,input().split())
while a!='':
	if b==0.0:
		print("error")
	else :
		ans=a/b
		ans+=0.5
		print(int(ans))
	a,b=map(float,input().split())
