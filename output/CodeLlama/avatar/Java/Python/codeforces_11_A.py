import sys

n, d = map(int, sys.stdin.readline().split())
nums = list(map(int, sys.stdin.readline().split()))
result = 0
a = 0
for i in range(1, n):
    a = (nums[i - 1] - nums[i])
    if a >= 0:
        result += a // d + 1
        nums[i] += (a // d + 1) * d
print(result)