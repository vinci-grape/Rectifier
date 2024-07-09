import sys
import math

def isprime(n):
    if n == 1:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

while True:
    try:
        p, q = map(int, sys.stdin.readline().split())
        l = int(math.sqrt(p*p + q*q))
        if isprime(l):
            print "P"
        else:
            print "C"
    except:
        break