n = int(input())
h = list(map(int, input().split()))

max_count = 0
l = 0

while l < n - 1:
    count = 0
    while l < n - 1 and h[l] >= h[l + 1]:
        l += 1
        count += 1
    max_count = max(max_count, count)

print(max_count)