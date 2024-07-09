def main():
    r, g, b, n = map(int, raw_input().split())
    ans = 0
    for i in xrange(0, n // r + 1):
        for j in xrange(0, n // g + 1):
            num = n - r * i - g * j
            if num >= 0 and num % b == 0:
                ans += 1
    print ans

if __name__ == '__main__':
    main()