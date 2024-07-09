import math
import sys
input = sys.stdin.readline

n, m = map(int, input().split())
s = input().rstrip()
t = input().rstrip()

gcd = math.gcd(n, m)

ans = 0
for i in range(gcd):
    if s[i*n//gcd]!= t[i*m//gcd]:
        ans = -1
        break

if ans == 0:
    ans = n*m//gcd

print(ans)