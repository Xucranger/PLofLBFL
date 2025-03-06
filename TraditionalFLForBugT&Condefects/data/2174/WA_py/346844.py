# coding=utf-8
a1,b1 = raw_input().split(" ")
a2,b2 = raw_input().split(" ")
a1=int(a1)
b1=int(b1)
a2=int(a2)
b2=int(b2)
if b1==0:
   print("error")
elif a1/b1-a1//b1>=0.5:
   c1=a1//b1+1
   print(c1)
else:
   c1=a1//b1
   print(c1)
if b2==0:
   print("error")
elif a2/b2-a2//b2>=0.5:
   c2=a2//b2+2
   print(c2)
else:
   c2=a2//b2
   print(c2)
