# coding=utf-8
while True:
    Q,W,E=input().split(" ")
    Q=int(Q)
    E=input(E)
    W=input(W)
    if Q+W>E and W+E>Q and Q+E>W:
        if Q==W and W==E and E==Q:
            print("DB")
        elif Q==W or W==E or E==Q:
            print("DY")
        elif Q*Q==W*W+E*E or W*W=Q*Q+E*E or E*E=Q*Q+W*W:
            print("ZJ")
        else:
            print("PT")
    else:
        print("ERROR")
