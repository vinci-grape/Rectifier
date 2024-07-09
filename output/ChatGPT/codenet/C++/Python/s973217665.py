import math

def is_prime(p, q):
    l = int(math.sqrt(p**2 + q**2))
    isprime = True
    for i in range(l):
        for j in range(l):
            x = i**2 + j**2
            if x <= 1 or x >= p**2 + q**2:
                continue
            if (i*p + j*q) % x == 0 and (i*q - j*p) % x == 0:
                isprime = False
    return isprime

n = int(input())
for _ in range(n):
    p, q = map(int, input().split())
    result = "P" if is_prime(p, q) else "C"
    print(result)