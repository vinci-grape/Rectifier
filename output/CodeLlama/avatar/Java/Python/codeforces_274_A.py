import sys
n = int(sys.stdin.readline())
k = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
arr.sort()
count = 0
set = set()
for i in range(n):
    if arr[i] % k != 0:
        count += 1
        set.add(arr[i])
    elif arr[i] // k not in set:
        count += 1
        set.add(arr[i])
print(count)