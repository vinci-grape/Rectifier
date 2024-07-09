import sys

def main(n):
    ans = 0
    for i in range(1, n+1):
        ans += i * (n // i) * ((n // i) + 1) // 2
    print(ans)

if __name__ == '__main__':
    n = int(sys.stdin.readline())
    main(n)