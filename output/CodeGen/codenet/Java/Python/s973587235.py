def main():
    sc = Scanner(sys.stdin)
    n = sc.nextInt()
    minN = sc.nextInt()-1
    for i in range(n-1):
        h = sc.nextInt()
        if minN == h:
            minN = h
        elif minN == h-1:
            minN = h-1
        elif minN < h-1:
            minN = h-1
        elif minN > h:
            print("No")
            return
    print("Yes")

if __name__ == '__main__':
    main()