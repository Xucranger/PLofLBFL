# coding=utf-8
import math;
def fun_x(x,n):
    if(x==0):
        return math.sin(n)
    else:
        return math.sin(fun_x(x-1,n))
def main():
    while(True):
        n = int(input())
        if n == "":
            break
        x = n
        print('%f'%fun_x(x, n))
if __name__ == '__main__':
    main()
