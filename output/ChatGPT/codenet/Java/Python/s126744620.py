n, k = map(int, input().split())
a = list(map(int, input().split()))

x = [0] * 200010
for i in range(n):
    x[a[i] - 1] += 1

x.sort()

ans = 0
for i in range(200010 - k):
    ans += x[i]

print(ans)