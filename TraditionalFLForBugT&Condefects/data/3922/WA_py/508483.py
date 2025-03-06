# coding=utf-8
# 1 .如果三角形是等边三角形，输出db。
# 如果它不是等边三角形，它是等腰三角形，输出dy 
# 3。如果它不是等腰三角形，它是直角三角形，输出zj 
# 4。如果它不相等，它不是等腰三角形，也不是直角，输出pt 
def sanjiao(a,b):
	if b == 0:
		print('error')
	elif a/b>=1:
		print(a/b)
	elif a/b > 2/5 and a/b <1:
		print(1)
	else:
		print(0)		
a ,b = input().split()
c ,d = input().split()
e,f =input().split()
a,b= int(a),int(b)
c,d = int(c),int(d)
e,f = int(e),int(f)
sanjiao(a,b)
sanjiao(c,d)
sanjiao(e,f)
