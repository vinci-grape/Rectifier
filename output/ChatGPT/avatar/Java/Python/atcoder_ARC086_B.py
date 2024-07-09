import sys

n = int(input())
a = list(map(int, input().split()))

r = []
m = 0
for i in range(1, n):
    if abs(a[m]) < abs(a[i]):
        m = i

for i in range(n):
    if (a[m] >= 0) ^ (a[i] >= 0):
        r.append(str(m + 1) + " " + str(i + 1))

if a[m] >= 0:
    for i in range(1, n):
        r.append(str(i) + " " + str(i + 1))
else:
    for i in range(n, 1, -1):
        r.append(str(i) + " " + str(i - 1))

print(len(r))
for item in r:
    print(item)