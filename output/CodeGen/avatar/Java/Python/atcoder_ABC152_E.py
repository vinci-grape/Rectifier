def main(args):
    N = int(input())
    A = [int(i) for i in input().split()]
    print(sum(A) % 1000000007)
    lcm = 1
    for ai in A:
        lcm = lcm * (ai % 1000000007) // gcd(lcm, ai)
    print(lcm % 1000000007)
    mod = 1000000007
    modLcm = lcm // 1000000007
    ans = 0
    for ai in A:
        ans = (ans + modDiv(modLcm, ai, mod)) % mod
    print(ans)


def modDiv(a, b, mod):
    return (a % mod) * modInv(b, mod) % mod


def modInv(a, mod):
    return modPow(a, mod - 2, mod)


def modPow(a, e, mod):
    ans = 1
    x = a % mod
    for y in range(e):
        if (y & 1):
            ans = (ans * x) % mod
        x = (x * x) % mod
    return ans