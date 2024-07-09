import sys

def split(n, k):
    sum = 0
    while n > 0:
        sum += n % k
        n /= k
    return sum

def solve(n, s):
    k = 2
    while k*k <= n or k < 100:
        if split(n, k) == s:
            return k
        k += 1
    while k <= n:
        a = n / k
        b = n % k
        if (a + b - s) % a == 0:
            dk = (a + b - s) / a
            if dk >= 0 and b - dk*a >= 0:
                return k + dk
        k = n / a + 1
    if n == s:
        return n+1
    return -1

if __name__ == '__main__':
    nl = int(sys.stdin.readline())
    sl = int(sys.stdin.readline())
    print(solve(nl, sl))