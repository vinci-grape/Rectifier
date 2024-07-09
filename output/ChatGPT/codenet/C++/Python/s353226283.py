n, k = map(int, input().split())
vec = list(map(int, input().split()))
vec.sort()
ans = float('inf')
for i in range(n - k + 1):
    diff = vec[i + k - 1] - vec[i]
    if diff < ans:
        ans = diff
print(ans)