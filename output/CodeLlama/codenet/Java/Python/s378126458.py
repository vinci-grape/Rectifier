import sys

n, q = map(int, sys.stdin.readline().split())
s = sys.stdin.readline().strip()
pre = [0] * (n + 1)
for i in range(1, n):
    if s[i - 1] == 'A' and s[i] == 'C':
        pre[i] = 1
for i in range(1, n):
    pre[i] += pre[i - 1]
while q:
    q -= 1
    l, r = map(int, sys.stdin.readline().split())
    print(pre[r - 1] - pre[l - 1])