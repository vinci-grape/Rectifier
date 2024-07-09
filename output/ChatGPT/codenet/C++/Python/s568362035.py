n, m = map(int, input().split())
Q = int(input())
a = list(map(int, input().split()))

MAXN = int(1E5 + 10)
b = [0] * MAXN
id = [0] * MAXN
vis = [False] * MAXN
cnt = [0] * MAXN

for i in range(Q, 0, -1):
    if not vis[a[i]]:
        j = Q - i + 1
        b[j] = a[i]
        vis[a[i]] = True

j = m
for i in range(m, 0, -1):
    if not vis[i]:
        b[j] = i
        j -= 1

for i in range(1, m + 1):
    id[b[i]] = i

flag = True
cnt[0] = n
for i in range(Q, 0, -1):
    t = id[a[i]]
    if cnt[t - 1] > 0:
        cnt[t - 1] -= 1
        cnt[t] += 1
        vis[t] = True
    elif not vis[t]:
        flag = False
        break

l = 0
while cnt[l] == 0:
    l += 1

for i in range(l + 1, m):
    flag = flag and b[i] < b[i + 1]

print("Yes" if flag else "No")