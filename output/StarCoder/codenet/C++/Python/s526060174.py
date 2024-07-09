n, m = map(int, raw_input().split())
x = [0] * (m + 1)
for i in range(n):
    k = int(raw_input())
    for j in range(k):
        a = int(raw_input())
        x[a] += 1
ans = 0
for i in range(1, m + 1):
    if x[i] == n:
        ans += 1
print ans