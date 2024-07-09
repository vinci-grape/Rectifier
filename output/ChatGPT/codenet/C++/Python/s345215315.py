import sys
input = sys.stdin.readline

def dfs(x, y, cnt):
    global ans
    if cnt > 20:
        return
    if x == h-1:
        ans = min(ans, cnt)
        return
    for i in range(8):
        nx = x + dx[i]
        ny = y + dy[i]
        if nx < 0 or nx >= h or ny < 0 or ny >= w:
            continue
        if s[nx][ny] != 'X':
            continue
        c = True
        while c and s[nx][ny] == 'X':
            s[nx][ny] = '.'
            nx += dx[i]
            ny += dy[i]
            if nx < 0 or nx >= h or ny < 0 or ny >= w:
                if nx >= h:
                    ans = min(ans, cnt+1)
                c = False
        if c:
            dfs(nx, ny, cnt+1)
        while nx != x or ny != y:
            nx -= dx[i]
            ny -= dy[i]
            s[nx][ny] = 'X'
        s[x][y] = '.'

h = 19
w = 15
dx = [0, 1, 0, -1, 1, 1, -1, -1]
dy = [1, 0, -1, 0, 1, -1, 1, -1]
s = []
for _ in range(h):
    s.append(input().strip())

ans = float('inf')
sx, sy = 0, 0
for i in range(h):
    for j in range(w):
        if s[i][j] == 'O':
            sx, sy = i, j
            s[i][j] = '.'

dfs(sx, sy, 0)

if ans == float('inf'):
    print(-1)
else:
    print(ans)