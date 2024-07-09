import sys

def gcd(a, b):
    if a < b:
        a, b = b, a
    r = a % b
    while r > 0:
        a = b
        b = r
        r = a % b
    return b

n = int(input().strip())

ans = int(input().strip())

for i in range(1, n):
    a = int(input().strip())
    ans = gcd(ans, a)

print(ans)