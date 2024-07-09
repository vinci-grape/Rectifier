import sys

n = int(input())
arr = list(map(int, input().split()))
answer = abs(arr[0])
for i in range(1, n):
    answer += abs(arr[i] - arr[i-1])
print(answer)