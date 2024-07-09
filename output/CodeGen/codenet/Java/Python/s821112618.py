def main():
    sc = Scanner(sys.stdin)
    n = sc.nextInt()
    s = ".,!? :abc:def:ghi:jkl:mno:pqrs:tuv:wxyz".split(":")
    k = [[] for _ in range(9)]
    for i in range(9):
        k[i] = s[i].encode('ascii')
    while n > 0:
        c = sc.next().encode('ascii')
        l = -1
        a = 0
        for i in range(c.__len__()):
            if c[i]!= '0':
                a = c[i] - '1'
                l = (l + 1) % k[a].__len__()
            else:
                if l >= 0:
                    print(k[a][l])
                    l = -1
        print()
        n -= 1

if __name__ == '__main__':
    main()