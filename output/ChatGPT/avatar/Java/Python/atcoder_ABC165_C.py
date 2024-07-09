import sys

def dfs(lst):
    global ans
    if len(lst) == n:
        score = 0
        for i in range(q):
            score += d[i] if lst[b[i]] - lst[a[i]] == c[i] else 0
        ans = max(ans, score)
        return
    if lst:
        for num in range(lst[-1], m+1):
            lst.append(num)
            dfs(lst)
            lst.pop()
    else:
        for num in range(1, m+1):
            lst.append(num)
            dfs(lst)
            lst.pop()

n, m, q = map(int, input().split())
a, b, c, d = [], [], [], []
for _ in range(q):
    ai, bi, ci, di = map(int, input().split())
    a.append(ai-1)
    b.append(bi-1)
    c.append(ci)
    d.append(di)

ans = -100
dfs([])
print(ans)