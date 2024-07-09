import sys

n = int(sys.stdin.readline())
h = list(map(int, sys.stdin.readline().split()))
max = 0
for l in range(n - 1):
    count = 0
    while l < n - 1 and h[l] >= h[l + 1]:
        l += 1
        count += 1
    max = max(max, count)
print(max)