import sys

N, M = map(int, sys.stdin.readline().split())

shortage = []

for i in range(M):
    A = int(sys.stdin.readline())
    shortage.append(N - A if N > A else 0)

shortage.sort()

ans = 0

for i in range(M - 1):
    ans += shortage[i]

print(ans)