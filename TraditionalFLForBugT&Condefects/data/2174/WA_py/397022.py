# coding=utf-8
while(1):
    try:
        str=input()
        i=0
        for letter in str:
            if letter==' ':
                a=int(str[0:i])
                b=int(str[i:])
            i+=1
        if(b==0):
            print("error")
        else:
            print(a//b)
    except:EOFerror
