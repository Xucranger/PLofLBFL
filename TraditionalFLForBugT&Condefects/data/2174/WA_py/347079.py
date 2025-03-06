# coding=utf-8
print'SHOULD BE:'
inputline=raw_input()
while(inputline.isspace()==False):
    listline=inputline.split(' ')
    if eval(listline[1])==0:
       print 'error'
    else:
       print eval(listline[0])/eval(listline[1])
    inputline=raw_input()
