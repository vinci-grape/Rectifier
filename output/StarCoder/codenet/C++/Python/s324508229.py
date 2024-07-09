n = int(raw_input())
cnt = [[0 for i in range(10)] for j in range(10)]
for i in range(1, n+1):
    a = i%10
    b = i/10
    cnt[a][b] += 1
ans = 0
for i in range(1, 10):
    for j in range(1, 10):
        ans += cnt[i][j]*cnt[j][i]
print ans