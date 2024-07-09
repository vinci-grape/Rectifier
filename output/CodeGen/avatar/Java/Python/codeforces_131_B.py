def main():
    scan = Scanner(sys.stdin)
    n = scan.next()
    N = (int)(1e5 + 5)
    cnt = [0] * (N + 1)
    for i in range(n):
        cnt[scan.next() + 10] += 1
    res = 0
    for i in range(10):
        res += cnt[i] * cnt[N - i]
    res += (cnt[10] * (cnt[10] - 1)) / 2
    print(res)