import sys
n = int(sys.stdin.readline())
a = list(map(int,sys.stdin.readline().split()))
pre = [0] * (n + 1)
last = [0] * (n + 1)
for i in range(1, n):
    pre[i] = pre[i - 1] + a[i]
for i in range(n, 1, -1):
    last[i] = last[i + 1] + a[i]
d = 1000000000000000000
for i in range(1, n):
    d = min(d, abs(pre[i] - last[i + 1]))
print(d)