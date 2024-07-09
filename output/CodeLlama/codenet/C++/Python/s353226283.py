n, k = map(int, input().split())
vec = []
ans = 1000000001
for i in range(n):
    t = int(input())
    vec.append(t)
vec.sort()
for i in range(n-k+1):
    diff = vec[i+k-1] - vec[i]
    if diff < ans:
        ans = diff
print(ans)