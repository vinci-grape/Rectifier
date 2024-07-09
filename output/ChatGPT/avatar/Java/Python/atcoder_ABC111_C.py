import sys

n = int(input())
v = list(map(int, input().split()))

vo = [0] * 100010
ve = [0] * 100010
vt = [0] * 100010

for i in range(n):
    vt[v[i]] += 1
    if i % 2 == 0:
        ve[v[i]] += 1
    else:
        vo[v[i]] += 1

vo.sort(reverse=True)
ve.sort(reverse=True)
vt.sort(reverse=True)

ans = 0

if vo[0] + ve[0] == vt[0]:
    ans = min(n - vo[0] - ve[1], n - vo[1] - ve[0])
else:
    ans = n - vo[0] - ve[0]

print(ans)