# coding=utf-8
def new_round(_float):
    if str(_float)[-1] == '5':
        return(round(float(str(_float)[:-1]+'6')))
    else:
        return(round(_float))
while True:
    a,b=map(int,input().split())
    if b==0:
        print("error")
    elif b!=0:
        c=new_round(a/b)
        print(c)
