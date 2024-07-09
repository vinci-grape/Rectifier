import sys

a = list(map(int, sys.stdin.readline().split()))
r = [num % 10 for num in a]
map = {}

for i in range(len(a)):
    b = 10
    if r[i] != 0:
        b = 10 - r[i]
        map[b] = a[i]

ans = 0

if len(map) == 0:
    ans = sum(a)
    print(ans)
    sys.exit()

last = map[max(map.keys())]
idx = 0

for i in range(len(a)):
    if a[i] == last:
        idx = i

for i in range(len(a)):
    if i != idx:
        if a[i] % 10 == 0:
            ans += a[i]
        else:
            ans += a[i] + (10 - r[i])

ans += last
print(ans)