# func(pos) = func(pos - 2) + func(pos - 1)
# 현재 타일로 올 수 있는 경우의 수 = 2칸 전에서 00을 붙이는 경우의 수 + 1칸 전에서 1을 붙이는 경우의 수

cache = [0] * 1000001

cache[0] = 1
N = int(input())
for i in range(1, N + 1):
    cache[i] = (cache[i - 1] + cache[i - 2]) % 15746
print(cache[N])
