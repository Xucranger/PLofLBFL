# coding=utf-8
while True:
 a, b = input().split()
 a, b = int(a), int(b)
 if b!=0:
   print('%d' % s)
   s=a/b
   d=a%b
   if d*2>=b:
    s =s+1
   print('%d' % s)
 else:
   print('error')
