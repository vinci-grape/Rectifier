import sys

N, M = map(int, sys.stdin.readline().split())

L = []
for i in range(N):
    L.append(int(sys.stdin.readline()))

L.sort()

for i in range(M):
    max_L = L[-1]
    if max_L == 0:
        break
    max_L /= 2
    itr = bisect.bisect_left(L, max_L)
    L.insert(itr, max_L)
    L.pop()

print(sum(L))