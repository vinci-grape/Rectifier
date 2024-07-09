n, m = map(int, input().split())
fa = [i for i in range(n+1)]
v = [0] * (2*m+1)

def get(x):
    if x == fa[x]:
        return x
    f = get(fa[x])
    v[x] += v[fa[x]]
    return f

for i in range(m):
    l, r, vi = map(int, input().split())
    li = get(l)
    ri = get(r)
    if li != ri:
        v[ri] = vi - v[r] + v[l]
        fa[ri] = li
    else:
        if v[r] - v[l] != vi:
            print("No")
            exit()
print("Yes")