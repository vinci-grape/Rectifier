import sys

N = int(sys.stdin.readline())
idorder = {}
for i in range(1, N+1):
    A = int(sys.stdin.readline())
    idorder[A] = i

for i in range(1, N+1):
    print(idorder[i], end=' ')