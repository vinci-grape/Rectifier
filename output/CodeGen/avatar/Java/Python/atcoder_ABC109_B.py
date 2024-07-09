class atcoder_ABC109_B {
    def main(args):
        sc = Scanner(sys.stdin)
        N = sc.next()
        map = {}
        for i in range(N):
            map[i] = sc.next()
        ans = True
        past = {}
        next = ""
        for i in range(N):
            if past.get(i) is not None:
                ans = False
                break
            past[i] = map[i]
            if i!= 0:
                if next!= map[i][0:1]:
                    ans = False
                    break
                next = map[i][-1]
        if ans:
            print("Yes")
        else:
            print("No")

}