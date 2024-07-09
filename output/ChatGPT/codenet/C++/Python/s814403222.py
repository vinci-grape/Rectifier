v = []
d = [[] for _ in range(33)]

while True:
    n = int(input())
    if n == 0:
        break
    
    for i in range(33):
        d[i].clear()
    
    for _ in range(n):
        v.append((0, ''))
        v[-1] = (0, input().split()[0])
        m = int(input())
        for _ in range(m):
            a = int(input())
            v[-1] = (v[-1][0] + n - len(d[a]), v[-1][1])
            for k in range(len(d[a])):
                v[d[a][k]] = (v[d[a][k]][0] - 1, v[d[a][k]][1])
            d[a].append(len(v) - 1)
    
    v.sort()
    print(v[0][0], v[0][1])