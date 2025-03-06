# coding=utf-8
while True:
    n,m=input().split()
    count=0
    for i in range(len(n)):
        for j in range(len(m)):
            if n[i]==m[j]:
                count+=1
    if count==len(m):
        print("Yes")
    else :
        print("No")
