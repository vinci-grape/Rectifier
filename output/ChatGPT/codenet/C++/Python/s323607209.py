n, k = map(int, input().split())
l = 0
r = 0

if k % 2 == 0:
    for i in range(1, n + 1):
        if i % k == k // 2:
            l += 1
        elif i % k == 0:
            r += 1
    print(l * l * l + r * r * r)
else:
    for i in range(1, n + 1):
        if i % k == 0:
            r += 1
    print(r * r * r)