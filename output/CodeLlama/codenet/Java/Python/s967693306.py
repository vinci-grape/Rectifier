import sys
import math
import string
import bisect

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def lcm(a, b):
    return a * b / gcd(a, b)

def inv(a):
    return pow(a, MOD - 2)

def pow(a, r):
    sum = 1
    while r > 0:
        if r & 1 == 1:
            sum *= a
            sum %= MOD
        a *= a
        a %= MOD
        r >>= 1
    return sum

def modFact(n):
    if n == 0:
        return 1
    return n * modFact(n - 1) % MOD

def fact(n):
    if n == 0:
        return 1
    return n * fact(n - 1)

def modComb(n, r):
    if n < r or n < 0 or r < 0:
        return 0
    return fac[n] * finv[r] % MOD * finv[n - r] % MOD

def comb(n, r):
    num = 1
    for i in range(1, r + 1):
        num = num * (n - i + 1) / i
    return num

def isPrime(a):
    if a <= 1:
        return False
    for i in range(2, int(math.sqrt(a)) + 1):
        if a % i == 0:
            return False
    return True

def nextPermutation(s):
    list = []
    for i in range(len(s)):
        list.append(s[i])

    pivotPos = -1
    pivot = 0
    for i in range(len(list) - 2, -1, -1):
        if list[i] < list[i + 1]:
            pivotPos = i
            pivot = list[i]
            break

    if pivotPos == -1 and pivot == 0:
        return None

    L = pivotPos + 1
    R = len(list) - 1
    minPos = -1
    min = sys.maxsize
    for i in range(R, L - 1, -1):
        if pivot < list[i]:
            if list[i] < min:
                min = list[i]
                minPos = i
    Collections.swap(list, pivotPos, minPos)
    Collections.sort(list[L:R + 1])

    sb = ''
    for i in range(len(list)):
        sb += list[i]
    return sb

def nextPermutation(a):
    for i in range(len(a) - 1, 0, -1):
        if a[i - 1] < a[i]:
            swapIndex = find(a[i - 1], a, i, len(a) - 1)
            temp = a[swapIndex]
            a[swapIndex] = a[i - 1]
            a[i - 1] = temp
            Arrays.sort(a, i, len(a))
            return True
    return False

def find(dest, a, s, e):
    if s == e:
        return s
    m = (s + e + 1) // 2
    return a[m] <= dest and find(dest, a, s, m - 1) or find(dest, a, m, e)

def elimination(a, b):
    n = len(a)
    f = 0
    for k in range(n - 1):
        for i in range(k + 1, n):
            f = - a[i][k] / a[k][k]
            for j in range(k + 1, n):
                a[i][j] += f * a[k][j]
            b[i] += f * b[k]
        for i in range(n - 1, -1, -1):
            for j in range(i + 1, n):
                b[i] -= a[i][j] * b[j]
            b[i] = b[i] / a[i][i]



class Pair:
    def __init__(self, i, j):