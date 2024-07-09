import sys

n, m = map(int, sys.stdin.readline().split())
a = list(map(int, sys.stdin.readline().split()))
cnt = [0] * (n + 1)
cnt[0] = 1
MOD = 1000000007

num = 1
if m > 0:
    if a[1] == 1:
        cnt[1] = 0
        if num < m:
            num += 1
    else:
        cnt[1] = 1
else:
    cnt[1] = 1

for i in range(2, len(cnt)):

    cnt[i] = (cnt[i - 2] + cnt[i - 1]) % MOD
    if m > 0:
        if i == a[num]:
            cnt[i] = 0
            if num < m:
                num += 1

print(cnt[n])