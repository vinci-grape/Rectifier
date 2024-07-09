n = int(input())
a = list(map(int, input().split()))

ans = 0
for i in a:
    if a.count(i) % 2 == 1:
        ans += 1
print(ans)