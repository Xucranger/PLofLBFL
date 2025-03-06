# coding=utf-8
import math
i = 20
def function(n, x):
	if x == 0:
		return math.sin(n)
	else:
		return math.sin(function(n, x-1))
while i > 0:
	a = int(input())
	result = function(a, a)
	print("{:.6f}".format(result))
	i -= 1
