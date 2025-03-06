# coding=utf-8
while True:
    m=raw_input().split()
    m[0]=int(m[0])
    m[1]=int(m[1])
    if(m[1]!=0):
        print(int((m[0]/m[1])+0.5))
    else:
        print("error")
