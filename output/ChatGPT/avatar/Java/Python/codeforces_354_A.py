import sys

def main():
    input = sys.stdin.readline
    N, L, R, QL, QR = map(int, input().split())
    W = list(map(int, input().split()))
    sum = [0] * (N + 1)
    for n in range(N):
        sum[n + 1] = sum[n] + W[n]
    min_cost = float('inf')
    for firstR in range(N + 1):
        lCount = firstR
        rCount = N - lCount
        cand = sum[lCount] * L + (sum[N] - sum[lCount]) * R
        llCount = max(0, lCount - rCount - 1)
        rrCount = max(0, rCount - lCount - 1)
        cand += llCount * QL + rrCount * QR
        min_cost = min(cand, min_cost)
    print(min_cost)

if __name__ == "__main__":
    main()