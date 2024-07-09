def main():
    N = int(input())
    idorder = {}
    for i in range(1, N + 1):
        A = int(input())
        idorder[A] = i
    for i in range(1, N + 1):
        print(idorder[i], end=' ')

if __name__ == "__main__":
    main()