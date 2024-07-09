n, m, x = map(int, input().split())
a = [0] * 105

for i in range(m):
    temp = int(input())
    a[temp] = 1

ansl = 0
ansr = 0
i = x

while i <= n:
    ansr += a[i]
    i += 1

i = x

while i >= 0:
    ansl += a[i]
    i -= 1

print(min(ansl, ansr))