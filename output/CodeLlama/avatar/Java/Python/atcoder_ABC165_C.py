import sys

n, m, q = map(int, sys.stdin.readline().split())
a = [0] * q
b = [0] * q
c = [0] * q
d = [0] * q
ans = -100

def dfs(list):
    global ans
    if len(list) == n:
        score = 0
        for i in range(q):
            score += (list[b[i]] - list[a[i]] == c[i]) * d[i]
        ans = max(ans, score)
        return
    if len(list) > 0:
        for num in range(list[-1], m + 1):
            list.append(num)
            dfs(list)
            list.pop()
    else:
        for num in range(1, m + 1):
            list.append(num)
            dfs(list)
            list.pop()

dfs([])
print(ans)