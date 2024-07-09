def main():
    scan = Scanner(System.in)
    list = []
    while scan.hasNextInt():
        a = scan.nextInt()
        if a == 0:
            print(list.pop())
        else:
            list.append(a)

if __name__ == '__main__':
    main()