# coding=utf-8
str = input()
ls = str.split(" ")
ans = ""
if int(ls[1]) == 0:
    ans = "error"
else:
    ans = round(int(ls[0])/int(ls[1]))
print(ans)
