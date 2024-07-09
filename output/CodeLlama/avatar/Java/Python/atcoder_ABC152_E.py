import sys
import math
import functools


def mod_inv(x, mod):
    return pow(x, mod - 2, mod)


def mod_pow(b, e, mod):
    ans = 1
    x = b % mod
    for y in range(e):
        if (y & 1) == 1:
            ans = (ans * x) % mod
        x = (x * x) % mod
    return ans


def mod_div(a, b, mod):
    return (a % mod) * mod_inv(b, mod) % mod


def main():
    N = int(sys.stdin.readline().rstrip())
    A = list(map(int, sys.stdin.readline().rstrip().split()))
    lcm = 1
    for ai in A:
        lcm = functools.reduce(
            lambda x, y: x * y // math.gcd(x, y),
            [lcm, ai],
        )
    mod = 1000000007
    mod_lcm = lcm % mod
    ans = 0
    for ai in A:
        ans = (ans + mod_div(mod_lcm, ai, mod)) % mod
    print(ans)


if __name__ == "__main__":
    main()