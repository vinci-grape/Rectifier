import sys

n = int(sys.stdin.readline())
cnt = [0] * 21
inputs = list(sys.stdin.readline().split())
for i in range(n):
    cnt[int(inputs[i]) + 10] += 1
res = 0
for i in range(10):
    res += cnt[i] * cnt[20 - i]
res += (cnt[10] * (cnt[10] - 1)) // 2
print(res)