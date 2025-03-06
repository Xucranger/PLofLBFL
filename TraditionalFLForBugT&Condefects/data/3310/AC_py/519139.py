# coding=utf-8
import math
def sinnum(n):
	b = n
	b = math.sin(n)
	while n>0:
		b = math.sin(b)
		n -= 1
	return b
while True :
	b = int(input())
	c = sinnum(b)
	print("%.6f"%c)
