import sys
import math

def gcd(m, n):
    if m < n:
        return gcd(n, m)
    if n == 0:
        return m
    return gcd(n, m % n)

def lcm(m, n):
    return m * n / gcd(m, n)

def main():
    n = int(sys.stdin.readline())
    l = list(map(int, sys.stdin.readline().split()))
    l.sort()
    print(l[n//2] - l[n//2 - 1])

if __name__ == '__main__':
    main()