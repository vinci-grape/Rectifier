def main():
    while True:
        d = int(raw_input())
        if not d:
            break
        ans = 0
        for i in xrange(1, int(d / 2) + 1):
            x = i * d
            y = x * x
            ans += y * d
        print ans

if __name__ == '__main__':
    main()