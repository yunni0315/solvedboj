a = [0]*31
for i in range(28):
    student = int(input())
    a[student] = 1

for i in range(1,31):
    if a[i] == 0:
        print(i)
    else:
        continue