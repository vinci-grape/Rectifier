import sys

N = int(input())
A = list(map(int, sys.stdin.readline().split()))
min_val = sys.maxsize
count = 0
total_sum = 0

for i in range(N):
    if A[i] < 0:
        count += 1
    min_val = min(min_val, abs(A[i]))
    total_sum += abs(A[i])

if count % 2 == 0:
    print(total_sum)
else:
    print(total_sum - min_val * 2)