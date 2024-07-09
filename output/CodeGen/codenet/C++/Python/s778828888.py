def main():
    n, m, x = map(int, raw_input().split())
    a = [0] * (n + 1)
    for i in xrange(m):
        a[int(raw_input())] += 1
    ansl = 0
    ansr = 0
    for i in xrange(n, -1, -1):
        ansr += a[i]
    for i in xrange(n, x, -1):
        ansl += a[i]
    print min(ansl, ansr)

main()