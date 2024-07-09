MOD = int(1e9+7)

def solve():
    N = int(input())
    A = list(map(int, input().split()))
    
    ans = 0
    sum = A[N-1]
    for i in range(N-2, -1, -1):
        ans += (sum * A[i]) % MOD
        ans %= MOD
        sum += A[i]
        sum %= MOD
    print(ans)

solve()