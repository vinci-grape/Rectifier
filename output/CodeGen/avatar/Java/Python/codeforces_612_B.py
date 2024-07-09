def main():
    s = input()
    n = int(s.next())
    dp = [0] * 200001
    for i in range(n):
        dp[int(s.next())] = i
    ans = 0
    for i in range(2, n+1):
        ans += abs(dp[i] - dp[i-1])
    print(ans)