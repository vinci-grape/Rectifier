import sys

n = int(input())
arr = list(map(int, input().split()))
sum = 0
for i in range(n):
    sum += arr[i]
c = 0
for i in range(n):
    if (sum - arr[i]) % (n - 1) == 0 and (sum - arr[i]) / (n - 1) == arr[i]:
        c += 1
        print(i+1, end=" ")
print()
print(c)