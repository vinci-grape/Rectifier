# -*- coding: utf-8 -*-

import sys

n, m, Q = map(int, sys.stdin.readline().strip().split())
a = map(int, sys.stdin.readline().strip().split())
b = [0] * (m + 1)
id = [0] * (m + 1)
vis = [False] * (m + 1)
cnt = [0] * (m + 1)

for i in xrange(1, Q + 1):
    if not vis[a[i]]:
        b[i] = a[i]
        vis[a[i]] = True

for j in xrange(m, 0, -1):
    if not vis[j]:
        b[j] = j

for i in xrange(1, m + 1):
    id[b[i]] = i

flag = True
cnt[0] = n
for i in xrange(Q, 0, -1):
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
for i in xrange(l + 1, m):
    if b[i] < b[i + 1]:
        flag = False
        break

if flag:
    print 'Yes'
else:
    print 'No'