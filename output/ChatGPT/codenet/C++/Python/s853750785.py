# AtCoder.py

import math
import sys
from collections import deque, defaultdict, Counter
from heapq import heappop, heappush
from itertools import permutations, accumulate, combinations, product
from bisect import bisect_left, bisect_right
from pprint import pprint as pp
from math import ceil, floor, sqrt, gcd
#from fractions import gcd
from copy import deepcopy
import sys
import os
import copy
import time
import random
import queue
import heapq
import math
from typing import List, Tuple


#defining some variables
mod = 998244353
INF = 10**18
PI = 3.141592653589793238
sys.setrecursionlimit(10**6)
abc = "abcdefghijklmnopqrstuvwxyz"
#ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
def ae():
    return list(map(int, input().split()))

def AI():
    return int(input())

def LI():
    return list(map(int, input().split()))

def LLI(rows_number):
    return [list(map(int, input().split())) for _ in range(rows_number)]

def MI(rows_number, col):
    return [list(map(int, input().split())) for _ in range(rows_number)]
def is_prime(n):
    if n == 1:
        return False
    for k in range(2, int(sqrt(n)) + 1):
        if n % k == 0:
            return False
    return True

def all_primes(n):
    return [x for x in range(2, n) if is_prime(x)]


def combinations_count(n, r):
    return math.factorial(n) // (math.factorial(n - r) * math.factorial(r))

def gcd_list(numbers):
    return reduce(gcd, numbers)

def lcm_base(x, y):
    return (x * y) // math.gcd(x, y)

def lcm_list(numbers):
    return reduce(lcm_base, numbers, 1)

def factorization(n):
    arr = []
    temp = n
    for i in range(2, int(-(-n ** 0.5 // 1)) + 1):
        if temp % i == 0:
            cnt = 0
            while temp % i == 0:
                cnt += 1
                temp //= i
            arr.append([i, cnt])

    if temp != 1:
        arr.append([temp, 1])

    if arr == []:
        arr.append([n, 1])

    return arr

def list_prime(n):
    if n == 1:
        return []
    prime = []
    for i in range(2, n + 1):
        flag = True
        for p in prime:
            if i % p == 0:
                flag = False
                break
        if flag:
            prime.append(i)
    return prime

#sieve of eratosthenes
def soe(n):
    prime = [True for i in range(n + 1)]
    p = 2
    while p * p <= n:
        if prime[p] == True:
            #update all multiples of p
            for i in range(p * p, n + 1, p):
                prime[i] = False
        p += 1
    prime[0], prime[1] = False, False
    return prime

def isPowerOfTwo(n):
    return (n and (not(n & (n - 1))))

def main():
    N, M = ae()
    H = ae()
    G = [[] for _ in range(N)]
    for _ in range(M):
        u, v = ae()
        u -= 1
        v -= 1
        G[u].append(v)
        G[v].append(u)
    ans = 0
    for u in range(N):
        flag = True
        for v in G[u]:
            if H[u] <= H[v]:
                flag = False
        if flag:
            ans += 1
    print(ans)


if __name__ == '__main__':
    main()