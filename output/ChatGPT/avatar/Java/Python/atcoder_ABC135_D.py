MOD = int(1e9) + 7

def solve(cs):
    dp = [[0] * 13 for _ in range(len(cs))]
    base = 1
    
    for i in range(len(cs)):
        if cs[len(cs) - 1 - i] == '?':
            for pre in range(13):
                for next in range(10):
                    dp[i][(base * next + pre) % 13] += dp[i - 1][pre] if i > 0 else (1 if pre == 0 else 0)
                    dp[i][(base * next + pre) % 13] %= MOD
        else:
            next = int(cs[len(cs) - 1 - i])
            for pre in range(13):
                dp[i][(base * next + pre) % 13] += dp[i - 1][pre] if i > 0 else (1 if pre == 0 else 0)
                dp[i][(base * next + pre) % 13] %= MOD
        
        base = (base * 10) % 13
    
    return dp[-1][5]

cs = input().strip()
print(solve(cs))