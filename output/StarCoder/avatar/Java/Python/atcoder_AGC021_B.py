import math
import sys

def main():
    input = sys.stdin.readline
    N = int(input())
    x = [0] * N
    y = [0] * N
    for i in range(N):
        x[i], y[i] = map(int, input().split())

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


if __name__ == '__main__':
    main()