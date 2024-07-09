def main(args):
    startTime = time.time()
    sc = Scanner(sys.stdin)
    n = sc.next()
    div = 10**9 + 7
    A = [sc.next() for i in range(n)]
    for i in range(60):
        a = 0
        count1 = 0
        for j in range(n):
            if A[j] >> i & 1 == 1:
                count1 += 1
        a = a + count1 * (n - count1)
        for j in range(i):
            a = a << 1
            a %= div
        ans += a
        ans %= div
    print(ans)
    endTime = time.time()
    print("Time taken: {} seconds".format(endTime - startTime))