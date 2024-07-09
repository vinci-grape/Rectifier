N = int(input())
a = list(map(int, input().split()))

idx = 1
ans = 0
for i in range(N):
    if a[i] == idx:
        idx += 1
    else:
        ans += 1

if idx == 1:
    print(-1)
else:
    print(ans)