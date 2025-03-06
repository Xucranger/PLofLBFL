# coding=utf-8
a,b = map(float,raw_input().split()) 
c,d = map(float,raw_input().split())
if b==0 :
    print ("error")
else :
    print (int(round(a / b)))
if d==0 :
    print ("error")
else :
    print (int(round(c / d)))
