import numpy as np

n = int(input())
a = []
avg = 0

for i in range(n):
    num = int(input())
    a.append(num)
    avg += num

avg /= n
s = abs(a[0] - avg)
ans = 0

for i in range(1, n):
    if s > abs(a[i] - avg):
        s = abs(a[i] - avg)
        ans = i

print(ans)