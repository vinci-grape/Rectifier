import sys

n = int(sys.stdin.readline())
p = list(map(int, sys.stdin.readline().split()))

ans = 0
for i in range(n - 2):
    if p[i] > p[i + 1] and p[i + 1] > p[i + 2]:
        ans += 1
    if p[i] < p[i + 1] and p[i + 1] < p[i + 2]:
        ans += 1

print(ans)