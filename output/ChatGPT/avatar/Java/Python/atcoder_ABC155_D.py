import sys

def check(x):
    tot = 0
    for i in range(n):
        now = a[i]
        l, r = 0, n
        if now >= 0:
            while l < r:
                c = (l + r) // 2
                if now * a[c] < x:
                    l = c + 1
                else:
                    r = c
            tot += l
        else:
            while l < r:
                c = (l + r) // 2
                if now * a[c] >= x:
                    l = c + 1
                else:
                    r = c
            tot += (n - l)
        if a[i] * a[i] < x:
            tot -= 1
    if tot // 2 < k:
        return True
    else:
        return False

n, k = map(int, input().split())
a = list(map(int, input().split()))
a.sort()

INF = int(1e18) + 1
l = -INF
r = INF

while l + 1 < r:
    c = (l + r) // 2
    if check(c):
        l = c
    else:
        r = c

print(l)