import sys
n = int(sys.stdin.readline())
result = 0
h = []
g = []
for i in range(n):
    h.append(int(sys.stdin.readline()))
    g.append(int(sys.stdin.readline()))
for i in range(n):
    for j in range(n):
        if h[i] == g[j]:
            result += 1
print(result)