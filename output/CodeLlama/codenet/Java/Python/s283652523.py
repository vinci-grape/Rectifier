import sys
import math

def solve():
    N = int(sys.stdin.readline())
    A = list(map(int, sys.stdin.readline().split()))
    
    ans = 0
    sum = A[-1]
    for i in range(N - 2, -1, -1):
        ans += (sum * A[i]) % 1000000007
        ans %= 1000000007
        sum += A[i]
        sum %= 1000000007
    print(ans)

solve()