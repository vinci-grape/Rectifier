n, m = map(int, input().split())
x = [0] * 31
for i in range(n):
    k = int(input())
    for j in range(k):
        a = int(input())
        x[a] += 1
ans = 0
for i in range(1, m+1):
    if x[i] == n:
        ans += 1
print(ans)