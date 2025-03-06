# coding=utf-8
while True:
    str1,str2=input().split()
    str_double=str1+str1
    if str2 in str_double:
        print('Yes')
    else:
        print('No')
