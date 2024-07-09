import sys

n = int(sys.stdin.readline())
ans = [0] * n
for i in range(n - 1):
    a = int(sys.stdin.readline())
    a -= 1
    ans[a] += 1
for i in range(n):
    print(ans[i])