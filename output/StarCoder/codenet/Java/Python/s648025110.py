import sys

n = int(input())
h = list(map(int, input().split()))

ans = 0
out = 0

for i in range(n):
    if out < h[i]:
        ans += h[i] - out
        out = h[i]
    else:
        out = h[i]

print(ans)