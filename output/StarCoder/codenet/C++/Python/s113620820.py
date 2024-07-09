import sys

MAX_N = 4000

INF = 1 << 60

wis = [0] * MAX_N
wsums = [0] * (MAX_N + 1)
dp = [[INF] * (MAX_N + 1) for _ in range(MAX_N)]
ks = [[-1] * (MAX_N + 1) for _ in range(MAX_N)]

def solve(n):
  wsums[0] = 0
  for i in range(n):
    wis[i] = int(sys.stdin.readline())
    wsums[i + 1] = wsums[i] + wis[i]

  for i in range(n):
    for j in range(n + 1):
      dp[i][j] = INF
      ks[i][j] = -1
    dp[i][i + 1] = 0
    ks[i][i + 1] = i

  for l in range(2, n + 1):
    for i in range(n):
      j = i + l
      wsum = wsums[j] - wsums[i]
      mind = INF
      mink = -1
      for k in range(ks[i][j - 1], ks[i + 1][j] + 1):
	d = dp[i][k] + dp[k][j] + wsum
	if mind > d: mind = d, mink = k
      dp[i][j] = mind
      ks[i][j] = mink

  print(dp[0][n])

if __name__ == '__main__':
  n = int(sys.stdin.readline())
  solve(n)