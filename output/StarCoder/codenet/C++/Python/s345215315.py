import sys

h,w = map(int,input().split())
s = [input() for _ in range(h)]
ans = 20

def dfs(x,y,cnt):
    global ans
    if cnt > ans:return
    if x == h-1:
        ans = min(ans,cnt)
        return
    for i in range(8):
        nx = x + dx[i]
        ny = y + dy[i]
        if nx < 0 or nx >= h or ny < 0 or ny >= w:continue
        if s[nx][ny]!= 'X':continue
        c = True
        while c and s[nx][ny] == 'X':
            s[nx][ny] = '.'
            nx += dx[i]
            ny += dy[i]
            if nx < 0 or nx >= h or ny < 0 or ny >= w:
                if nx >= h:ans = min(ans, cnt+1)
                c = False
        if c:dfs(nx,ny,cnt+1)
        while nx!= x or ny!= y:
            nx -= dx[i]
            ny -= dy[i]
            s[nx][ny] = 'X'
        s[x][y] = '.'

sx,sy = -1,-1
for i in range(h):
    for j in range(w):
        if s[i][j] == 'O':
            sx,sy = i,j
            s[i][j] = '.'
            break
dfs(sx,sy,0)
if ans == 20:print(-1)
else:print(ans)