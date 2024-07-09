import sys

N, M = map(int, sys.stdin.readline().split())
black = [[0] * (N + 2) for _ in range(N + 2)]

for m in range(1, M + 1):
    x, y = map(int, sys.stdin.readline().split())
    for xx in range(x - 1, x + 2):
        for yy in range(y - 1, y + 2):
            black[xx][yy] += 1
            if black[xx][yy] == 9:
                print(m)
                sys.exit()

print("-1")