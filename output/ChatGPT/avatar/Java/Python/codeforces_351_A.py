import sys

n = int(sys.stdin.readline())
arr = list(map(float, sys.stdin.readline().split()))
non_int = 0
sum_before = 0
sum_val = 0

for i in range(2 * n):
    sum_before += arr[i]
    if arr[i] != int(arr[i]):
        non_int += 1
    sum_val += int(arr[i])

max_sum = min(n, non_int) + sum_val
min_sum = max(0, non_int - n) + sum_val

if min_sum > sum_before:
    ans = min_sum - sum_before
elif max_sum < sum_before:
    ans = sum_before - max_sum
else:
    x = sum_before - int(sum_before)
    ans = min(1 - x, x)

print("{:.3f}".format(ans))