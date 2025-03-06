# coding=utf-8
a, b = map(int, raw_input().split(' '))
while a != '':
  if b == 0 :
    print("error")
  elif float(a)/float(b)-a//b>=0.5:
    print((a // b)+1)
  else :
    print(a // b)
  a, b = map(int, raw_input().split(' '))
