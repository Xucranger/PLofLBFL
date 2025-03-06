# coding=utf-8
from math import*
def F(x:int,n:int)->float:
    if x == 0:
        return sin(n)
    else:
        return sin(F(x-1,n))
def main():
  while True:
      n = eval(input())
      print("%.6f"%(F(n,n)))
main()
