def main():
    n,k = map(int, raw_input().split())
    for i in xrange(k):
        a = map(int, raw_input().split())
        d[a[0]] = True
    while True:
        x = n
        hantei = True
        while x:
            if d[x % 10]:
                hantei = False
                break
            x //= 10
        if hantei:
            print n
            break
        n += 1

if __name__ == '__main__':
    main()