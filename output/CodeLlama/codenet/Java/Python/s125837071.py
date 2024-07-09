import math
import sys

def findS(k, i):
    s = 0
    for j in range(1, k + 1):
        if j % i == 0:
            s += 1
    return s

n = int(sys.stdin.readline())
ans = 1
mod = 1000000007
for i in range(2, n + 1):
    for j in range(2, i):
        if i % j == 0:
            if j == i:
                s = 0
                for k in range(1, n + 1):
                    s += findS(k, i)
                ans = (ans * (s + 1)) % mod

print(ans)