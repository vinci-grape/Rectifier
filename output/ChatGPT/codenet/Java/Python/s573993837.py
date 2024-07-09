import sys
def solve(n, m):
    if n == 0:
        return 0
    if n == m:
        return 0
    if n > m:
        n = m + n % m
        n -= m
        return min(m - n, n)
    return min(m - n, n)

def main():
    t = 1
    for _ in range(t):
        n = int(input())
        m = int(input())
        print(solve(n, m))

if __name__ == "__main__":
    main()