# coding=utf-8
import math
def Foun(n,k) -> float:
    if n == 0:
        s=math.sin(k)
        return s
    else:
        s=math.sin(Foun(n-1,k))
        return s
def main():
    while True:
        n = int(input())
        a = Foun(n,n)
        print("%.6f"%a)
main()
