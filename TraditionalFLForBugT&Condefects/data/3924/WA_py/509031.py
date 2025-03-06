# coding=utf-8
while True:
  a,b = input().split()
  a=int(a)
  b=int(b)
  if (a==11 and b<=9)or(a<=9 and b==11):
    print('Game Over')
  elif a==b==0:
    print('A')
  elif a+b<20:
    if (a+b)%2==0:
      print('B')
    else:
      print('A')
  elif a+b>=20:
    if a-b==1 or b-a==1:
      print('B')
    elif a-b==0 or b-a==0:
      print('A')
    elif a-b==2 or b-a==2:
      print('Game Over')
