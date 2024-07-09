def main(N):
    scanner = Scanner(sys.stdin)
    for i in range(1, N+1):
        A = scanner.nextInt()
        idorder[A] = i
    for i in range(1, N+1):
        print(idorder[i])
        print(" ")

if __name__ == '__main__':
    main(int(input()))