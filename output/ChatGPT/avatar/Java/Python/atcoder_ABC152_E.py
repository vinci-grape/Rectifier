import math

def main():
    N = int(input())
    A = list(map(int, input().split()))

    lcm = 1
    for ai in A:
        a = ai
        lcm = lcm // math.gcd(lcm, a) * a

    mod = 1000000007
    modLcm = lcm % mod

    ans = 0
    for ai in A:
        ans = (ans + modDiv(modLcm, ai, mod)) % mod

    print(ans)

def modDiv(a, b, mod):
    return (a % mod) * modInv(b, mod) % mod

def modInv(x, mod):
    return modPow(x, mod - 2, mod)

def modPow(b, e, mod):
    ans = 1
    x = b % mod
    y = e
    while y != 0:
        if y & 1 == 1:
            ans = (ans * x) % mod
        x = (x * x) % mod
        y >>= 1
    return ans

if __name__ == "__main__":
    main()