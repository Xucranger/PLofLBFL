# coding=utf-8
while True:
 a, b,c = input().split()
 a, b,c = int(a), int(b),int(c)
 if a>b:
   t=a
   a=b
   b=t
 if b>c:
  q = b
  b = c
  c = q
 if a > c:
   d = a
   a = c
   c = d
 if a==b and a==c:
  print('DB')
 elif a==b or b==c and a!=c:
   print('DY')
 elif a*a+b*b==c*c:
   print('ZJ')
 elif a +  b < c :
   print('ERROR')
 else:
   print('PT')
