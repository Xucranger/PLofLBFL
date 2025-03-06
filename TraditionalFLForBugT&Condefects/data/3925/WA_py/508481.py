# coding=utf-8
while True:
    list1 = []
    list2 = []
    list1,list2= input().split()
    c = len(list1)
    d = len(list2)
    e = list1[c-1]
    f = list2[d-1]
    n = int(e)*int(f)
    if(n>=10):
        print(n-10)
    else:
        print(n)
