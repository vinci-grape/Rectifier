import sys
from collections import deque

H, W = map(int, input().split())
A = [input() for _ in range(H)]
queue = deque()
for i in range(H):
    for j in range(W):
        if A[i][j] == '#':
            start = [i, j, 0]
            queue.append(start)

flag = [[0] * W for _ in range(H)]
ans = 0
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
while queue:
    temp = queue.popleft()
    y, x, depth = temp
    for i in range(4):
        if 0 <= y + dy[i] < H and 0 <= x + dx[i] < W:
            if flag[y + dy[i]][x + dx[i]] == 0 and A[y + dy[i]][x + dx[i]] == '.':
                flag[y + dy[i]][x + dx[i]] = 1
                queue_add = [y + dy[i], x + dx[i], depth + 1]
                queue.append(queue_add)
                ans = depth + 1
print(ans)