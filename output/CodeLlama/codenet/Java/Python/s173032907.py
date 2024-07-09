import sys

n = int(sys.stdin.readline())
a = [int(sys.stdin.readline()) for i in range(n)]
cost1 = 0
cost2 = 0
current1 = 0
current2 = 0
dp1 = [0] * n
dp2 = [0] * n
for i in range(0, n):
    cost1 += abs(a[i] - current1)
    current1 = a[i]
    dp1[i] = cost1
    cost2 += abs(a[n - 1 - i] - current2)
    current2 = a[n - 1 - i]
    dp2[n - 1 - i] = cost2
for i in range(0, n):
    if i == 0:
        print(dp2[i + 1] + abs(a[1]))
    elif i == n - 1:
        print(dp1[i - 1] + abs(a[i - 1]))
    else:
        print(dp1[i - 1] + dp2[i + 1] + abs(a[i - 1] - a[i + 1]))