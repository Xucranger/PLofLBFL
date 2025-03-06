# coding=utf-8
def is_rotation(str1, str2):
    if str1 == "" or str2 == "" or len(str1) != len(str2):
        return False
    str_double = str1 + str1
    if str2 in str_double:
        return True
    else:
        return False
s1,s2=input().split()
while s1:
    if is_rotation(s1,s2):
        print("YES")
    else:
        print("NO")
    s1,s2=input().split()
