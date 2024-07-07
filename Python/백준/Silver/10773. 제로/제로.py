k = int(input())
g =[]
for i in range(k):
    c = int(input())
    if c == 0:
        g.pop()
    else:
        # 해당 수를 쓴다
        g.append(c)  
A = 0
for i in g:
    A += i
print(A)