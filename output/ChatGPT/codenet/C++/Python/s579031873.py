N, X = map(int, input().split())

ans = 0
min_val = 1000000000
for i in range(N):
    tmp = int(input())
    X -= tmp
    ans += 1
    if tmp < min_val:
        min_val = tmp

ans += X // min_val

print(ans)