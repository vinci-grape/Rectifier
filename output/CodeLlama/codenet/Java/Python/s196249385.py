import sys


def solve():
    n, k = map(int, sys.stdin.readline().split())
    a = list(map(int, sys.stdin.readline().split()))

    cumsum = [0]
    for i in range(n):
        cumsum.append(cumsum[i] + a[i])

    b = []
    max_ = 0
    for i in range(n):
        for j in range(i, n):
            b.append(cumsum[j + 1] - cumsum[i])
            max_ = max(max_, cumsum[j + 1] - cumsum[i])

    mask = 1 << 63
    while mask > 0:
        tmp = []
        for e in b:
            if e & mask:
                tmp.append(e)
        if len(tmp) >= k:
            b = tmp
        mask >>= 1

    if len(b) < k:
        print(0)
    else:
        ans = 0
        for e in b:
            ans &= e
        print(ans)


if __name__ == '__main__':
    solve()