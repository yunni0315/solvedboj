N, K = map(int, input().split())
cache = [0] * (K + 100000)


for i in range(N):
    value = int(input())

    for j in range(1, K + 1):
        if cache[j] == 0:
            continue

        cache[j + value] += cache[j]
    for j in range(value, K + 1, value):
        cache[j] += 1
print(cache[K])

# 11111
# 2 111
# 2 2 1
