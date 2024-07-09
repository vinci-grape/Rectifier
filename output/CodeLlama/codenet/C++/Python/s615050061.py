import sys

B = 13131
N = 500000 + 7

n = int(sys.stdin.readline())
s = sys.stdin.readline().strip()
f = [0] * (N + 1)
g = [0] * (N + 1)
map = {}
cnt = 0

def pow(a, k):
	if k < 0: k += (1 << 63) - 1
	t = 1
	for i in range(k):
		if k & 1: t *= a
		a *= a
		k >>= 1
	return t

for i in range(1, n + 1):
	if s[i] == '+' or s[i] == '-':
		f[i] = f[i - 1] + (1 if s[i] == '+' else -1) * pow(B, g[i] = g[i - 1])
	else:
		f[i] = f[i - 1]
		g[i] = g[i - 1] + (1 if s[i] == '<' else -1)
for i in range(n, 0, -1):
	map[f[n] * pow(B, g[i - 1]) + f[i - 1]] = map.get(f[n] * pow(B, g[i - 1]) + f[i - 1], 0) + 1
	cnt += map[f[n] * pow(B, g[i - 1]) + f[i - 1]]
print(cnt)