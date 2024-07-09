MOD = 1000000007

def solve():
    xx = list(map(int, input().split()))
    min_val = min(xx)
    max_val = max(xx)
    res = 0
    if min_val == max_val:
        f = factorial(min_val)
        res = (2*f*f) % MOD
    elif min_val + 1 == max_val:
        f = factorial(min_val)
        res = (f * ((f*max_val) % MOD)) % MOD
    
    print(res)

def factorial(n):
    res = 1
    for i in range(2, n+1):
        res = (res * i) % MOD
    return res

if __name__ == "__main__":
    solve()