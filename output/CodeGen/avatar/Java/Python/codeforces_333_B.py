class codeforces_333_B {
    def main(args):
        n = int(input())
        m = int(input())
        bannedRows = set()
        bannedCols = set()
        for i in range(m):
            r = int(input())
            if r > 1 and r < n:
                bannedRows.add(r)
            c = int(input())
            if c > 1 and c < n:
                bannedCols.add(c)
        answer = (n - 2) * 2
        answer -= len(bannedRows)
        answer -= len(bannedCols)
        if n % 2!= 0:
            mid = (n + 1) / 2
            if not bannedRows.contains(mid) and not bannedCols.contains(mid):
                answer -= 1
        print(answer)


    def test(args):
        assert main(args) == 4

}