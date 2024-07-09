class atcoder_ABC122_C {
    final static long mod = 1000000007

    def main(args):
        sc = Scanner(System.in)
        n = sc.nextInt()
        q = sc.nextInt()
        c = sc.next().strip().toCharArray()
        range = [[sc.nextInt(), sc.nextInt()]]
        for i in range(q):
            range.append([sc.nextInt(), sc.nextInt()])
        frag = [0] * (n + 1)
        rui = [0] * (n + 1)
        for i in range(2, n + 1):
            if c[i - 2] == 'A' and c[i - 1] == 'C':
                frag[i] += 1
            rui[i] = rui[i - 1] + frag[i]
        for i in range(q):
            left, right = range[i][0], range[i][1]
            print(rui[right] - rui[left])
        return


    main()
}