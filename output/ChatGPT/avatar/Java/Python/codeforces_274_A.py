n, k = map(int, input().split())
arr = list(map(int, input().split()))
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