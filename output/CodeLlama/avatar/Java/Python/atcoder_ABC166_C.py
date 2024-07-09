import sys
N = int(sys.stdin.readline().rstrip())
M = int(sys.stdin.readline().rstrip())
H = [0] * N
ans = [True] * N
for i in range(N):
    H[i] = int(sys.stdin.readline().rstrip())
for i in range(M):
    temp1, temp2 = map(int, sys.stdin.readline().rstrip().split())
    if H[temp1 - 1] < H[temp2 - 1]:
        ans[temp1 - 1] = False
    elif H[temp1 - 1] > H[temp2 - 1]:
        ans[temp2 - 1] = False
    else:
        ans[temp1 - 1] = False
        ans[temp2 - 1] = False
ans2 = 0
for i in range(N):
    if ans[i]:
        ans2 += 1
print(ans2)