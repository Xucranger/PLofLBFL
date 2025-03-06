# coding=utf-8
while True:
    a, b = input().split()
    if len(a) != len(b):print('No')
    elif len(a) == len(b) == 0:print('Yes')
    List = []
    List.append(a)
    for i in range(1,len(a)-1):
        List.append(a[i] + a[i+1:] + a[:i])
    List.append(a[-1] + a[:len(a)-1])
    if b in List: print('Yes')
    else: print('No')
