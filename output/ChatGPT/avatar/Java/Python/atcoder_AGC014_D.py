import sys
from collections import defaultdict

def max_matching(v, p):
    a = 0
    o = 0
    for w in g[v]:
        if w == p:
            continue
        r = max_matching(w, v)
        a += r // 2
        o += r % 2
    return 2 * a + min(1, o) + 1

n = int(input())
g = defaultdict(list)
for _ in range(n-1):
    a, b = map(int, input().split())
    g[a-1].append(b-1)
    g[b-1].append(a-1)

m = max_matching(0, -1) // 2
if 2 * m == n:
    print("Second")
else:
    print("First")