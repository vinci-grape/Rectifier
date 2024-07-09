def main():
    sc = Scanner(sys.stdin)
    q = sc.next()
    while q > 0:
        n = sc.next()
        s = 0
        x = int(math.log(n, 2))
        x += 1
        s = -1 * (2 ** x) + 2 + (n * (n + 1)) / 2 - (2 ** x)
        print(s)
        q -= 1

if __name__ == '__main__':
    main()