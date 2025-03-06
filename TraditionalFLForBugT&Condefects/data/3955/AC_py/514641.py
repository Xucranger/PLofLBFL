# coding=utf-8
def is_rotation(str1, str2):
    if str1 == "" or str2 == "" or len(str1) != len(str2):
        return False
    str_double = str1 + str1
    if str2 in str_double:
        return 1
    else:
        return 0
while(1):
    a=[]
    b=[]
    a,b=input().split()
    c=is_rotation(a,b)
    if c==1:
        print("Yes")
    else:
        print("No")
