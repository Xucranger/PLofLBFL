# coding=utf-8
s1 = raw_input().split()
s2 = raw_input().split()
if int(s1[1]==0):
   print 'ERROR'
else:
    print int(s1[0])/int(s1[1])
if int(s2[1])==0:
    print 'ERROR'
else:
    print int(s2[0])/int(s2[1])
