import sys
from collections import Counter

n, k = map(int, sys.stdin.readline().split())
cnt = Counter(sys.stdin.readline().split())

a = []
for x in cnt.values():
    a.append(x)

ans = 0
a.sort()
m = len(a) - k
for i in range(m):
    ans += a[i]
    
print(ans)