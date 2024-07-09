def main(args):
    sc = input()
    n = sc.next()
    print(n + " ")
    m = n
    for i in range(n-1,0,-1):
        if m % i == 0:
            print(i + " ")
            m = i
    print(m)

if __name__ == "__main__":
    main(sys.argv)