import sys
import bisect

def solve():
    n, k = map(int, sys.stdin.readline().split())
    a = list(map(int, sys.stdin.readline().split()))
    a.sort()
    ans = 0
    for i in range(k):
        ans += a[i]
    print(ans)

solve()