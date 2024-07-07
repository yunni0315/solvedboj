cs = [[]]
a = 0
for i in range(9):
    values = int(input())
    for j in range(len(cs)):
        new_cs = cs[j].copy()
        new_cs.append(values)
        cs.append(new_cs)
for new_cs in cs:
    if len(new_cs) == 7 and sum(new_cs) == 100:
        new_cs.sort()
        for k in range(7):
            print(new_cs[k])
        break