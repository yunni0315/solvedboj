# 2가지 상태 : 현재 계단 위치, 연속해서 몇개 밟았는지
# func(N, 1) = func(N-2, 1) + func(N-2,2)
# func(N, 2) = func(N-1, 1)
N = int(input())
cache = [[0, 0] for i in range(N)]
values = [int(input()) for i in range(N)]
cache[0][0] = values[0]
for cur in range(1, N):
    cache[cur][0] = max(cache[cur - 2][0], cache[cur - 2][1]) + values[cur]
    cache[cur][1] = cache[cur - 1][0] + values[cur]

print(max(cache[N - 1]))
