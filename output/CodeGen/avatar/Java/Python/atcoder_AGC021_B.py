def main(args):
    N = int(input())
    x = [int(i) for i in input().split()]
    y = [int(i) for i in input().split()]
    for i in range(N):
        thetas = []
        for j in range(N):
            if i == j:
                continue
            thetas.append(math.atan2(y[j] - y[i], x[j] - x[i]))
        thetas.sort(key=lambda x: x if x < 2 * math.pi else 2 * math.pi - x)
        thetas.append(thetas[0] + 2 * math.pi)
        ans = 0
        for k in range(N - 1):
            ans = max(ans, thetas[k + 1] - thetas[k] - math.pi)
        print(ans / (math.pi * 2))