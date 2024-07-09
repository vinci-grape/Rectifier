n = int(input())
cnt = [0] * 21

for i in range(n):
    cnt[int(input()) + 10] += 1

res = 0
for i in range(10):
    res += cnt[i] * cnt[20 - i]

res += (cnt[10] * (cnt[10] - 1)) // 2

print(res)