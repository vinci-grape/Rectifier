import sys
from collections import defaultdict
n = int(sys.stdin.readline())
d = defaultdict(int)
while n > 0:
    n -= 1
    num = int(sys.stdin.readline())
    if d[num] == 0:
        d[num] += 1
    else:
        d[num] -= 1
        if d[num] == 0:
            del d[num]
        else:
            d[num] += 1
ans = 0
for key in d.keys():
    ans += d[key]
print(ans)