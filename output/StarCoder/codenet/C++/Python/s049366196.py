import sys
import math

def is_prime(x):
    for i in range(2, int(math.sqrt(x)) + 1):
        if x % i == 0:
            return False
    return True

def solve(N):
    ans = 1
    for i in range(2, N + 1):
        if is_prime(i):
            cnt = 0
            while N:
                cnt += N // i
                N //= i
            ans *= cnt + 1
            ans %= mod
    return ans

if __name__ == '__main__':
    N = int(sys.stdin.readline())
    print(solve(N))