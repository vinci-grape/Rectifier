import sys

n, m = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))
gen = [0] * 11
for i in range(n):
    gen[arr[i]] += 1
ans = 0
for i in range(1, m + 1):
    for k in range(1, m + 1):
        if i != k:
            ans += gen[i] * gen[k]
print(ans // 2)