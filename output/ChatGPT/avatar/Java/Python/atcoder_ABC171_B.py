import sys


def solve(n, k, a):
    a.sort()
    ans = 0
    for i in range(k):
        ans += a[i]
    return ans


def main():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    ans = solve(n, k, a)
    print(ans)


if __name__ == "__main__":
    main()