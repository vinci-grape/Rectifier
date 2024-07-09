def solve(K, S):
    ans = 0
    for x in range(K+1):
        for y in range(K+1):
            wk = S - x - y
            if 0 <= wk <= K:
                ans += 1
    return ans

K = int(input())
S = int(input())
print(solve(K, S))