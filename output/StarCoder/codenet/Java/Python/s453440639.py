import sys

H, W = map(int, sys.stdin.readline().split())
S = []
for _ in range(H):
    S.append(list(sys.stdin.readline().strip()))

for i in range(H):
    for j in range(W):
        if S[i][j] == '.':
            count = 0
            for a in range(-1, 2):
                if i + a < 0 or H <= i + a:
                    continue
                for b in range(-1, 2):
                    if j + b < 0 or W <= j + b:
                        continue
                    if S[i + a][j + b] == '#':
                        count += 1
            S[i][j] = str(count)

for i in range(H):
    for j in range(W):
        print(S[i][j], end='')
    print()