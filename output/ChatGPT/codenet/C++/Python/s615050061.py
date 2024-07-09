B = 13131
N = 500000 + 7

def pow(a, k):
    if k < 0:
        k += (1 << 63) - 1
    t = 1
    while k:
        if k & 1:
            t = t * a
        a = a * a
        k >>= 1
    return t

n = int(input())
s = input().strip()
f = [0] * (N)
g = [0] * (N)

map = {}
cnt = 0

for i in range(1, n+1):
    if s[i-1] == '+' or s[i-1] == '-':
        f[i] = f[i-1] + (1 if s[i-1] == '+' else -1) * pow(B, g[i] = g[i-1])
    else:
        f[i] = f[i-1]
        g[i] = g[i-1] + (-1 if s[i-1] == '<' else 1)

for i in range(n, 0, -1):
    if f[n] * pow(B, g[i-1]) + f[i-1] in map:
        cnt += map[f[n] * pow(B, g[i-1]) + f[i-1]]
    if f[i] in map:
        map[f[i]] += 1
    else:
        map[f[i]] = 1

print(cnt)