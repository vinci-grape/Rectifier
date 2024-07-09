import math
import sys

n = int(input())
nums = list(map(int, input().split()))

min = sys.maxsize
countNegatives = 0
sum = 0
for num in nums:
    abs = abs(num)
    sum += abs
    min = min(min, abs)
    if num < 0:
        countNegatives += 1

print(countNegatives % 2 == 0 and sum or sum - (min * 2))