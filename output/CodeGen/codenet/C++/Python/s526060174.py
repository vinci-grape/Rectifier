def main():
    n, m = map(int, raw_input().split())
    k, a = map(int, raw_input().split())
    x = [0] * (m + 1)
    for i in range(n):
        for j in range(k):
            x[a[i]] += 1
    ans = 0
    for i in range(1, m + 1):
        if x[i] == n:
            ans += 1
    print ans

if __name__ == '__main__':
    main()