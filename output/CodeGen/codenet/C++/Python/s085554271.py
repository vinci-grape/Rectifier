#!/usr/bin/python

import sys

def isPrime(num):
    if num < 2:
        return False
    else:
        for i in range(2, num):
            if num % i == 0:
                return False
        return True

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

def lcm(a, b):
    return a / gcd(a, b) * b

def fact(num):
    if num == 0:
        return 1
    else:
        return num * fact(num - 1)

def fact_mod(num, mod):
    if num == 0:
        return 1
    else:
        return num * fact_mod(num - 1, mod) % mod

def combination_mod(num, r, mod):
    if r > num - r:
        r = num - r
    if r == 0:
        return 1
    else:
        return combination_mod(num, r - 1, mod) * (num - r + 1) % mod * fact_mod(r, mod) % mod

def rev(s):
    return s[::-1]

def main():
    a = int(sys.argv[1])
    b = int(sys.argv[2])
    k = int(sys.argv[3])
    for i in range(a, b + 1):
        if i % k == 0:
            print "OK"
        else:
            print "NG"
    return 0