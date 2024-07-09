import sys
input = sys.stdin.readline

N = int(input())
X = int(input())
x = list(map(int, input().split()))

xsum = [0] * (N + 1)
for i in range(N):
    xsum[i + 1] = xsum[i] + x[i]

ans = X * N + 5 * xsum[N]
for i in range(1, N):
    cost = X * i + 5 * (xsum[N] - xsum[N - i])
    for j in range(5, 0, -2):
        for k in range(N - i, -1, -i):
            if cost > ans:
                break
            cost += j * (xsum[k] - xsum[max(k - i, 0)])
        else:
            continue
        break
    ans = min(ans, cost)
print(ans + N * X)