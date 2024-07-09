import math
import sys

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

def lcm(a, b):
    return a / gcd(a, b) * b

def getPrimeFactor(n):
    res = {}
    for i in range(2, int(math.sqrt(n)) + 1):
        while n % i == 0:
            res[i] = res.get(i, 0) + 1
            n //= i
    if n != 1:
        res[n] = 1
    return res

def IsPrimeNumber(num):
    if num <= 2:
        return True
    elif num % 2 == 0:
        return False

    sqrtNum = math.sqrt(num)
    for i in range(3, int(sqrtNum) + 1, 2):
        if num % i == 0:
            return False

    return True

def modinv(a, m):
    b = m
    u = 1
    v = 0
    while b:
        t = a // b
        a -= t * b
        a, b = b, a
        u -= t * v
        u, v = v, u
    u %= m
    if u < 0:
        u += m
    return u

N, K = map(int, sys.stdin.readline().split())

A = list(map(int, sys.stdin.readline().split()))

cur = 1
dic = [-1] * (N + 1)
flg = False
for i in range(1, K + 1):
    if dic[cur] < 0 or flg:
        dic[cur] = i
        cur = A[cur]
    else:
        tmp = K - (dic[cur] - 1)
        tmp %= i - dic[cur]
        i = K - tmp
        flg = True

print(cur)