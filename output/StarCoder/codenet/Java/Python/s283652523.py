import sys

class Main:
    def __init__(self):
        self.in = self.new_in()
        self.out = self.new_out()

    def new_in(self):
        return sys.stdin.buffer

    def new_out(self):
        return sys.stdout.buffer

    def close(self):
        self.in.close()
        self.out.close()

    def solve(self):
        N = self.in.readline().rstrip()
        A = self.in.readline().rstrip().split()
        ans = 0
        sum = int(A[N-1])
        for i in range(N-2, -1, -1):
            ans += (sum * int(A[i])) % 1000000007
            ans %= 1000000007
            sum += int(A[i])
            sum %= 1000000007
        self.out.write(str(ans) + '\n')

    def __call__(self):
        self.solve()

if __name__ == '__main__':
    main = Main()
    main()
    main.close()