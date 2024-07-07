self_num =  0
not_self_num = set()
num = set()
for i in range(10000):
    tem = i
    num.add(i)
    while tem > 0:
        i += tem % 10
        tem = tem // 10

    if i < 10000:
        not_self_num.add(i)
    

self_num = num - not_self_num
self_num = list(self_num)
self_num.sort()

for i in self_num:
    print(i)