import sys
n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
answer = abs(arr[0])
for i in range(1, n):
    answer += abs(arr[i] - arr[i - 1])
print(answer)