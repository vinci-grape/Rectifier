import math

def C(n, m):
    res = 1
    for i in range(m - n + 1, m + 1):
        res *= i
    for i in range(1, n + 1):
        res //= i
    return res

n, p = map(int, input().split())
k0 = 0
k1 = 0
for _ in range(n):
    x = int(input())
    if x % 2 == 1:
        k1 += 1
    else:
        k0 += 1

ans = 1
for _ in range(k0):
    ans *= 2

if p == 0:
    add = 0
    for i in range(0, k1 + 1, 2):
        add += C(i, k1)
    ans *= add
    print(ans)
else:
    add = 0
    for i in range(1, k1 + 1, 2):
        add += C(i, k1)
    ans *= add
    print(ans)