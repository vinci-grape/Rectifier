def main():
  n, m = map(int, raw_input().split())
  for i in range(m):
    cost, b = map(int, raw_input().split())
    for j in range(b):
      c = int(raw_input())
      key.append(1 << (c - 1))
  for i in range(1 << n):
    for j in range(m):
      dp[i][j + 1] = min(dp[i][j], dp[i][j + 1])
      dp[i | key[j + 1]][j + 1] = min(dp[i | key[j + 1]][j + 1], dp[i][j] + cost[j + 1])
  if dp[(1 << n) - 1][m] == INF:
    print -1
  else:
    print dp[(1 << n) - 1][m]

if __name__ == '__main__':
  main()