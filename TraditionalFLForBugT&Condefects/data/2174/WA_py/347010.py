# coding=utf-8
str1=raw_input()
str2=raw_input()
a=eval(str1[0:1])
b=eval(str1[2:3])
a2=eval(str2[0:1])
b2=eval(str2[2:3])
print"SHOULD BE:"
if b==0:
   print "error"
else:
   print a/b
if b2==0:
   print "error"
else:
   print a2/b2
