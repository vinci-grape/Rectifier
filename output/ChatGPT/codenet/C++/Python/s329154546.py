import sys

N, L = map(int, sys.stdin.readline().split())
S = [sys.stdin.readline().strip() for _ in range(N)]
S.sort()

for s in S:
    print(s)