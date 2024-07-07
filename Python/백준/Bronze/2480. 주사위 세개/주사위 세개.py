A,B,C = map(int,input().split())
L = []
L.append(A)
L.append(B)
L.append(C)
Max = 0
if A == B and B == C:
    print(10000+A*1000)
elif A == B or B == C :
    print(1000+B*100)
elif A == C:
    print(1000+A*100)
else:
    for i in L:
        if i > Max:
            Max = i
    print(Max*100)