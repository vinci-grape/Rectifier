def main():
    scan = Scanner(sys.stdin)
    len = scan.nextInt()
    a = [scan.nextInt() for i in range(len)]
    l = 0
    r = 0
    flag = False
    isTrue = False
    loop:
        for i in range(len):
            if a[i]!= i + 1 and not flag:
                l = i + 1
                flag = True
                continue
            if a[i]!= i + 1 and flag:
                r = i + 1
                if a[r - 1] - a[r - 2] > 0:
                    isTrue = True
                    break loop
        if not isTrue:
            print(l + " " + r)
        else:
            print("0 0")

if __name__ == "__main__":
    main()