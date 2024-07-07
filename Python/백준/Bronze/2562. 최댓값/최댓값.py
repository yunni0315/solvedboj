a = []
for i in range(9):
    n = int(input())
    a.append(n)
b = max(a)
print(b)
print(a.index(b)+1)