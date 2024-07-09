import sys

def main():
    N = int(sys.stdin.readline().rstrip())
    X = int(sys.stdin.readline().rstrip())
    x = [int(sys.stdin.readline().rstrip()) for _ in range(N)]
    xsum = [0]
    for i in range(N):
        xsum.append(xsum[i] + x[i])
    ans = X * N + 5 * xsum[N]
    for i in range(1, N):
        cost = X * i + 5 * (xsum[N] - xsum[N - i])
        for j in range(5, N - i, 2):
            if cost > ans:
                break
            cost += j * (xsum[j] - xsum[j - i])
        ans = min(ans, cost)
    print(ans + N * X)


if __name__ == "__main__":
    main()