#!/usr/bin/python

import sys

def gcd(x,y):
    if y == 0:
        return x
    else:
        return gcd(y,x%y)

def lcm(x,y):
    return (x*y)/gcd(x,y)

def kaijo(k):
    sum = 1
    for i in range(1,k+1):
        sum *= i
        sum %= 1000000000+7
    return sum

def lmax(s,t):
    if s > t:
        return s
    else:
        return t

def lmin(s,t):
    if s < t:
        return s
    else:
        return t

def main():
    n,k = map(int,raw_input().strip().split())
    sum = 0
    for b in range(1,n+1):
        cnt = (n+1)/b
        md = (n+1)%b
        sum += cnt*max((b-k),0)+max((md-k),0)
        if k == 0:
            sum -= 1
    print sum

if __name__ == '__main__':
    main()