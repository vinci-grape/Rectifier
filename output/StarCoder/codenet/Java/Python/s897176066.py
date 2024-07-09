import sys

N = int(input())
A = list(map(int, input().split()))
A.sort()

for i in range(1, N):
    if A[i] == A[i-1]:
        print("NO")
        sys.exit(0)

print("YES")