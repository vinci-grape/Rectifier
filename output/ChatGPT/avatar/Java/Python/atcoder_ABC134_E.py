import sys

n = int(input())
nums = [int(input()) for _ in range(n)]
counts = {}

for num in nums:
    if num not in counts:
        counts[num] = 1
    else:
        counts[num] += 1

ans = len(counts)
print(ans)