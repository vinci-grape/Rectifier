import sys

N = int(input())
A = list(map(int, sys.stdin.readline().split()))
ans = 0
count = 0
for i in range(N-1):
    if A[i] == A[i+1]:
        count += 1
        if count % 2 != 0:
            ans += 1
    else:
        count = 0
print(ans)