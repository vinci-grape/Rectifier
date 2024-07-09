import sys

n = int(input())
nums = list(map(int, sys.stdin.readline().split()))

min_val = float('inf')
count_negatives = 0
sum_val = 0
for num in nums:
    abs_val = abs(num)
    sum_val += abs_val
    min_val = min(min_val, abs_val)
    if num < 0:
        count_negatives += 1

print(sum_val if count_negatives % 2 == 0 else sum_val - (min_val*2))