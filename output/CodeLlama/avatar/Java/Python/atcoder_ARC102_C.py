import sys

def nCk(n, k):
    if n < k:
        return 0
    if n == k or k == 0:
        return 1
    if k == 1:
        return n
    return nCk(n - 1, k - 1) + nCk(n - 1, k)

def main():
    k = int(sys.stdin.readline().rstrip())
    n = int(sys.stdin.readline().rstrip())
    for i in range(2, 2 * k + 1):
        if i > k:
            pairs = k - i // 2
        else:
            pairs = (i - 1) // 2
        active = k - 2 * pairs
        if i % 2 == 0:
            active -= 1
        times2 = 1
        total = 0
        for j in range(0, pairs + 1):
            choice = times2 * nCk(pairs, j) % 998244353
            times2 = times2 * 2 % 998244353
            if active + j - 1 < 0:
                continue
            total += choice * nCk(n + active - 1, active + j - 1)
            if i % 2 == 0:
                total += choice * nCk(n + active - 2, active + j - 1)
            total %= 998244353
        print(total)

if __name__ == '__main__':
    main()