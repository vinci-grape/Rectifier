n = int(input())
a = [int(x) for x in input().split()]

abs_a = [abs(x) for x in a]

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