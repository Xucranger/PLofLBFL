# coding=utf-8
while True:
 a, b = input().split()
 a, b = int(a), int(b)
 c = ((a + b) / 2) % 2;
 if a < 11 and b < 11:
   if c == 0:
     flag=2
   else:
     flag = 3
 elif a == 11 and b < 10:
   flag = 1
 elif a < 10 and b == 11:
   flag = 1
 elif a >= 10 and b >= 10:
  if (a - b)*(a-b) >= 4:
   flag = 1
  else:
   c = (a + b) % 2;
   if c == 0:
      flag=2
   else:
     flag=3
 if flag == 1:
  print("Game Over")
 else:
   if flag == 2:
     print("A")
   else:
     print("B")
