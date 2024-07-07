T=int(input())

for i in range(T):
    tmp = input().split()
    R = int(tmp[0])
    S = tmp[1]
    for ch in S:
        print(ch*R,end="")
    print()