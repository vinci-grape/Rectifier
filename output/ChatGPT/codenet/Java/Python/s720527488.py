import sys

def main():
    m, n = map(int, input().split())
    manju = list(map(int, input().split()))
    boxlen = []
    boxcost = []
    for _ in range(n):
        l, c = map(int, input().split())
        boxlen.append(l)
        boxcost.append(c)

    manju.sort()
    dp = [[0] * (n+1) for _ in range(m+1)]
    for i in range(m-1, -1, -1):
        for j in range(n-1, -1, -1):
            length = i+boxlen[j] if i+boxlen[j] < m else m
            cnt = sum(manju[m-1-k] for k in range(i, length))
            dp[i][j] = max(dp[i][j], dp[length][j+1] + cnt - boxcost[j])
            dp[i][j] = max(dp[i][j], dp[i][j+1])

    print(dp[0][0])

if __name__ == '__main__':
    main()