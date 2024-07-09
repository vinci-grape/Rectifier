import math

N = int(input())
x = []
y = []

for i in range(N):
    x_i, y_i = map(int, input().split())
    x.append(x_i)
    y.append(y_i)

for i in range(N):
    thetas = []

    for j in range(N):
        if i == j:
            continue
        thetas.append(math.atan2(y[j] - y[i], x[j] - x[i]))

    thetas.sort()
    thetas.append(thetas[0] + 2 * math.pi)
    ans = 0

    for k in range(N - 1):
        ans = max(ans, thetas[k + 1] - thetas[k] - math.pi)

    print(ans / (math.pi * 2))