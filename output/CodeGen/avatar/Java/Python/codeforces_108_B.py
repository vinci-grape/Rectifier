def main(args):
    n = int(input())
    a = [int(i) for i in input().split()]
    a.sort()
    for i in range(len(a)-1):
        if a[i+1] < a[i]*2 and a[i]!= a[i+1]:
            print("YES")
            return
    print("NO")

if __name__ == "__main__":
    main(sys.argv)