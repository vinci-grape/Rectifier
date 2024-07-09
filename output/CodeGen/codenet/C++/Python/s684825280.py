def main():
    n, k = map(int, raw_input().split())
    a = []
    for i in range(n):
        a.append(int(raw_input()))
    a = sorted(a)
    m = len(a) - k
    ans = 0
    for i in range(m):
        ans += a[i]
    print ans

if __name__ == '__main__':
    main()