B = 0
C = []
for i in range(10):
    A = int(input())
    B = A%42
    C.append(B)
print(len(list(set(C))))