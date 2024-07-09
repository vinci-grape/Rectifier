import sys

n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))

abs_a = a
for i in range(n):
    if abs_a[i] < 0:
        abs_a[i] = -abs_a[i]

ans = 0
min = abs_a[0]
for e in abs_a:
    ans += e
    if min > e:
        min = e

num_negative = 0
for e in a:
    if e < 0:
        num_negative += 1

if num_negative % 2:
    ans -= min * 2

print(ans)