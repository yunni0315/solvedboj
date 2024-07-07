num = int(input())
a = 0
for one_num in range(1,num+1):
    if one_num >= 100:
        one_num = list(map(int,str(one_num)))
        one_num1 = one_num[0]
        one_num2 = one_num[1]
        one_num3 = one_num[2]
        if one_num1 - one_num2 == one_num2 - one_num3:
            a+=1
    else:
        a += 1
print(a)