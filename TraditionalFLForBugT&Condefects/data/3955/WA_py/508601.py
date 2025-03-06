# coding=utf-8
s1,s2=input().split()
while s1:
    for i in range(0,len(s1)):
        a=s1.pop(0)
        s1=s1.append(a)
        if s1=s2:
            break
    if i==len(s1):
        print("NO")
    else :
        print("YES")
    s1,s2=input().split()
