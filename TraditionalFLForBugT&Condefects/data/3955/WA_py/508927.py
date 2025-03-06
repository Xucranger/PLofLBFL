# coding=utf-8
class Solution:
    def rotateString(self, A: str, B: str) -> bool:
        return len(A) == len(B) and A in B*2
s1,s2=input().split()
while s1:
    if Solution.rotateString(s1,s2):
        print("YES")
    else:
        print("NO")
    s1,s2=input().split()
