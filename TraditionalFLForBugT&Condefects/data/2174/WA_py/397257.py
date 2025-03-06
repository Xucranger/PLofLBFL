# coding=utf-8
while(1):
        num = raw_input()
        n1 = 0
        n2 = 0
        j = len(num)
        error = 0
        for i in range(0, len(num)):
            if (num[i] != ' ' and i < j):
                n1 = n1 * 10 + int(num[i])
            if (num[i] == ' '):
                j = i
            if (i > j and num[i] != ' '):
                n2 = n2 * 10 + int(num[i])
        if n2==0 :
            print("error")
        else:
            answer = float(n1) / float(n2)
            if answer%1>=0.5 :
               answer=answer+1
            answer = int(answer)
            print answer
