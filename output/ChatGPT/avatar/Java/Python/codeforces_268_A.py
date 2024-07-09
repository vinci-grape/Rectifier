n = int(input())
result = 0
h = []
g = []

for i in range(n):
    h_val, g_val = map(int, input().split())
    h.append(h_val)
    g.append(g_val)

for i in range(n):
    for j in range(n):
        if h[i] == g[j]:
            result += 1

print(result)