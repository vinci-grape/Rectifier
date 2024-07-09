n = int(input())
cnt = [[0] * 10 for _ in range(10)]

for i in range(1, n + 1):
    b = i % 10
    a = i
    while a >= 10:
        a //= 10
    cnt[a][b] += 1

ans = 0

for i in range(1, 10):
    for j in range(1, 10):
        ans += cnt[i][j] * cnt[j][i]

print(ans)