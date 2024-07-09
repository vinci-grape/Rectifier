n, m, x = map(int, raw_input().split())
a = [0] * (n + 1)
for i in range(m):
    a[int(raw_input())] = 1

ansl = ansr = 0
for i in range(x, n + 1):
    ansr += a[i]
for i in range(x):
    ansl += a[i]

print min(ansl, ansr)