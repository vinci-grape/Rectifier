import sys

n = int(raw_input())
a = [0] * (n + 1)
pre = [0] * (n + 1)
last = [0] * (n + 1)

for i in range(1, n + 1):
    a[i] = int(raw_input())

for i in range(1, n):
    pre[i] = pre[i - 1] + a[i]

for i in range(n, 0, -1):
    last[i] = last[i + 1] + a[i]

d = (1 << 60)

for i in range(1, n):
    d = min(d, abs(pre[i] - last[i + 1]))

print d