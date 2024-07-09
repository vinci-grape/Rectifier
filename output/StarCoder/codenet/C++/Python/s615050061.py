from collections import defaultdict
from math import log

B = 13131
N = 500000 + 7

n = int(input())
s = input()

f = [0] * N
g = [0] * N

map = defaultdict(int)
cnt = 0

for i in range(1, n + 1):
    if s[i] == '+' or s[i] == '-':
        f[i] = f[i - 1] + (s[i] == '+'? 1 : -1) * B ** g[i - 1]
        g[i] = g[i - 1] + (s[i] == '<'? -1 : 1)
    else:
        f[i] = f[i - 1]
        g[i] = g[i - 1] + (s[i] == '<'? -1 : 1)

for i in range(n, 0, -1):
    map[f[i]] += 1
    cnt += map[f[n] * B ** g[i - 1] + f[i - 1]]

print(cnt)