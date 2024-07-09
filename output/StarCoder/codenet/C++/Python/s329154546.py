import sys

L,N = map(int,sys.stdin.readline().split())
S = []
for i in range(N):
    S.append(sys.stdin.readline().rstrip())
S.sort()
for i in range(N):
    print(S[i])