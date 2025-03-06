# coding=utf-8
while True:
 a, b = input().split()
 a, b = int(a), int(b)
 s=a/b
 d=a%b
 if d*2>=b:
  s =s+1
 if b==0:
   print('error')
 else:
  print('%d' %s)
