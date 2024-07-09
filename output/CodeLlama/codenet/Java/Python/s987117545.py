import sys
from math import factorial

n, k = map(int, sys.stdin.readline().split())

ans = 0
for i in range(k, n+2):
    max = i*(2*n-i+1)//2
    min = i*(i-1)//2
    ans += (max - min + 1) % 10000000007

print(ans % 10000000007)