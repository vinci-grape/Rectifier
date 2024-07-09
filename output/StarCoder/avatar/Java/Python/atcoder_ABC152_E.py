import math
import sys

def mod_inv(a, m):
    return pow(a, m-2, m)

def mod_pow(x, n, m):
    ans = 1
    x = x % m
    while n > 0:
        if n & 1:
            ans = (ans * x) % m
        x = (x * x) % m
        n >>= 1
    return ans

def lcm(a, b):
    return (a * b) // math.gcd(a, b)

def main():
    input = sys.stdin.readline
    MOD = 1000000007
    N = int(input())
    A = list(map(int, input().split()))
    lcm_val = 1
    for ai in A:
        lcm_val = lcm(lcm_val, ai)
    ans = 0
    for ai in A:
        ans = (ans + mod_pow(lcm_val, MOD-2, MOD) * mod_inv(ai, MOD) % MOD) % MOD
    print(ans)

if __name__ == '__main__':
    main()