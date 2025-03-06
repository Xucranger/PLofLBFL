# coding=utf-8
div1 = 0
div2 = 0
while True:
  a,b = input().split()
  e = float(a)
  f = float(b)
  c = int(a)
  d = int(b)
  if b == '0':
    print('ERROR')
  else:
    div1 = e/f
    div2 = int(c/d)
    if div1 < div2+0.5:
      print(div2)
    else:
      print(div2+1)
