n, k = map(int, input().split())
l = list(map(int, input().split()))
l.sort()
ans = 0
for i in range(k):
    ans += l[n - 1 - i]
print(ans)