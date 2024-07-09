class codeforces_682_B {
    def main(args):
        in = input()
        n = int(in)
        list = []
        for i in range(n):
            list.append(int(in))
        list.sort()
        c = 1
        for i in range(n):
            if list[i] >= c:
                c += 1
        print(c)
    main()
}