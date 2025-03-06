# coding=utf-8
while True:
    a, b = input().split()
    l = list(a)
    l1 = []
    for i in range(len(a)):
        j = 0
        l1.append(l[j])
        del l[j]
        l.append(l1[j])
        del l1[j]
        s1 = ''.join(l)
        if (s1 == b):
            print('Yes')
            break
        if (i == len(a) - 1):
            print('No')
