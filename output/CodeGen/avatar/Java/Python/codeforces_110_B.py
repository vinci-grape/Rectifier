def main():
    sc = Scanner(sys.stdin)
    n = sc.next()
    c = [chr(ord('a') + i) for i in range(n)]
    for i in range(4):
        for j in range(i, n, 4):
            c[j] = chr(ord('a') + i)
    for i in range(n):
        print(c[i])

if __name__ == '__main__':
    main()