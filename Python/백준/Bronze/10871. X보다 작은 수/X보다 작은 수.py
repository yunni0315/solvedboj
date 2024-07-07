N, X = map(int,input().split())
A_n = list(map(int,input().split()))

for i in A_n:
    if i < X:
        print(i,end=' ')