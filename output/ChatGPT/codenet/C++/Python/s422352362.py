n = int(input())
a = list(map(int, input().split()))

pre = [0] * n
last = [0] * n
sumpre = 0
sumlast = 0

for i in range(n - 1):
    sumpre += a[i]
    pre[i] = sumpre

for i in range(n - 1, 0, -1):
    sumlast += a[i]
    last[i] = sumlast

d = float('inf')

for i in range(n - 1):
    d = min(d, abs(pre[i] - last[i + 1]))

print(d)