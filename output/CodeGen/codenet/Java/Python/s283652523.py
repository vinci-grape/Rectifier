class Main:
    def __init__(self):
        self.in = sys.stdin
        self.out = sys.stdout

    def solve(self):
        N = int(self.in.readline())
        A = [int(x) for x in self.in.readline().split()]
        ans = 0
        sum = A[N-1]
        for i in range(N-2,-1,-1):
            ans += (sum * A[i]) % MOD
            ans %= MOD
            sum += A[i]
            sum %= MOD
        self.out.println(ans)


if __name__ == '__main__':
    sys.stdin = open("input.txt", "r")
    sys.stdout = open("output.txt", "w")
    m = Main()
    m.solve()