import sys

n, m = map(int, sys.stdin.readline().split())
gcd = n // (n // gcd(n, m))
s, t = sys.stdin.readline().rstrip(), sys.stdin.readline().rstrip()
print(sum(s[i * n // gcd] != t[i * m // gcd] for i in range(gcd)))