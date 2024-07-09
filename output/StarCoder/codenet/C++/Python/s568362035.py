n, m, Q = map(int, raw_input().split())
a = map(int, raw_input().split())
b = [0] * (m + 1)
id = [0] * (m + 1)
vis = [False] * (m + 1)
cnt = [0] * (m + 1)

flag = True
cnt[0] = n
for i in xrange(Q, 0, -1):
    t = id[a[i]]
    if cnt[t - 1] > 0:
        cnt[t - 1] -= 1
        cnt[t] += 1
        vis[t] = True
    else:
        flag = False
        break

l = 0
while cnt[l] == 0:
    l += 1
for i in xrange(l + 1, m):
    flag &= b[i] < b[i + 1]

print "Yes" if flag else "No"