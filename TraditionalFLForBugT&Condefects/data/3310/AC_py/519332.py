# coding=utf-8
import math
def func(n,xu):
    if n==0:
        return math.sin(xu)
    else:
        return math.sin(func(n-1,xu))
while True:
 n=input()
 n=int(n)
 xu=n
 print("%.6f"%func(n,xu))
