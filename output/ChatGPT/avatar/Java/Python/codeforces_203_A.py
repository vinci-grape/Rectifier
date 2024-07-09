import sys


def solve():
    x, t, a, b, da, db = map(int, sys.stdin.readline().split())
    first = a
    second = b
    ok = False
    for i in range(t):
        first -= da
        for j in range(t):
            second -= db
            if second + first == x or second == x or first == x or x == 0:
                ok = True
                break
        if ok:
            break
    if ok:
        print("YES")
    else:
        print("NO")


def main():
    solve()


if __name__ == "__main__":
    main()