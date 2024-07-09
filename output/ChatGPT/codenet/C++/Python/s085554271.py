import math

def is_prime(num):
    if num < 2:
        return False
    elif num == 2:
        return True
    elif num % 2 == 0:
        return False

    sqrt_num = math.isqrt(num)
    for i in range(3, sqrt_num+1, 2):
        if num % i == 0:
            return False

    return True

def gcd(a, b):
    return math.gcd(a, b)

def lcm(a, b):
    return a // gcd(a, b) * b

def max(a, b, c):
    temp = max(a, b)
    return max(temp, c)

def min(a, b, c):
    temp = min(a, b)
    return min(temp, c)

def is_integer(num):
    return math.floor(num) == num

def factorial(num):
    if num == 0:
        return 1
    else:
        return num * factorial(num - 1)

def divisors(n):
    cnt = 0
    for i in range(1, int(math.sqrt(n))+1):
        if n % i == 0:
            cnt += 1
            if i * i != n:
                cnt += 1
    return cnt

def factorial_mod(n, mod):
    f = 1
    for i in range(2, n+1):
        f = f * (i % mod) % mod
    return f

def power_mod(x, n, mod):
    res = 1
    while n > 0:
        if n & 1:
            res = (res * x) % mod
        x = (x * x) % mod
        n >>= 1
    return res

def combination_mod(n, r, mod):
    if r > n - r:
        r = n - r
    if r == 0:
        return 1
    a = 1
    for i in range(r):
        a = a * ((n-i) % mod) % mod
    b = power_mod(factorial_mod(r, mod), mod-2, mod)
    return (a * b) % mod

def is_palindrome(s):
    return s == s[::-1]

k, a, b = map(int, input().split())
for i in range(a, b+1):
    if i % k == 0:
        print("OK")
        break
else:
    print("NG")