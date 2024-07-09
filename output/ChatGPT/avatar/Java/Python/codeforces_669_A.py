def solve(n):
    print((n // 3) * 2 + (0 if n % 3 == 0 else 1))

if __name__ == "__main__":
    n = int(input())
    solve(n)