n = int(input())

a = list(map(int, input().split()))

curr = 0
for i in range(n):
    if a[i] == curr+1:
        curr += 1

if curr > 0:
    print(n - curr)
else:
    print(-1)