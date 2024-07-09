import sys
import math

def reverse(n):
    if n < 10:
        return n * 10
    t = n
    r = 0
    while t > 0:
        r = (r * 10) + t % 10
        t = t / 10
    return r

n = int(sys.stdin.readline())
m = int(sys.stdin.readline())
t = reverse(m)
print(t + n)