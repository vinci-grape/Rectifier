n, m = map(int, input().split())
req = list(map(int, input().split()))
pre = list(map(int, input().split()))
i, j = n - 1, m - 1
ans = 0
while i >= 0 and j >= 0:
    if req[i] > pre[j]:
        ans += 1
    else:
        j -= 1
    i -= 1
print(ans + i + 1)