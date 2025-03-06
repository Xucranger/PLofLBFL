# coding=utf-8
s1 = raw_input().split()
s2 = raw_input().split()
if float(s1[1])==0.0:
   print 'error'
else:
    print int(round(float(s1[0])/float(s1[1])))
if float(s2[1])==0.0:
    print 'error'
else:
    print int(round(float(s2[0])/float(s2[1])))
