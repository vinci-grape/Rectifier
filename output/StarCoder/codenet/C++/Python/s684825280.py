n, k = map(int, input().split())
a = list(map(int, input().split()))

a.sort()

ans = 0
for i in range(n):
    ans += a[i]

print(ans - sum(a[-k:]))