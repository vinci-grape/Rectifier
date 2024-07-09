import sys

n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
ans = arr[0] + 1
for i in range(1, n):
    ans += abs(arr[i] - arr[i - 1]) + 2
print(ans)