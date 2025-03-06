# coding=utf-8
a,b=map(int,input().split())
while a!='':
	if b==0:
		print("error")
	else :
		str2=str(a/b)
		ans=a/b;
		x=str2.find('.')
		if x==-1:
			print(str2)
		else :
			if str2[x+1]>='5':
				ans+=1;
			print(int(ans))
	a,b=map(int,input().split())
