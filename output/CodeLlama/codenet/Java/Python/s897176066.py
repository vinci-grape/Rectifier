import sys
N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))
A.sort()
for j in range(1, N):
    if A[j] == A[j - 1]:
        print("NO")
        exit()
print("YES")