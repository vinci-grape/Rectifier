import sys

N = int(input())
P = list(map(int, input().split()))

P.sort()

ans = 0

for i in range(N-1):
    ans = min(ans, abs(P[i]-P[i+1]))

print(ans)