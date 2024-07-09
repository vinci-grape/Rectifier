import sys
import math

class Main:
    def __init__(self):
        self.n = int(input())
        self.a = [int(i) for i in input().split()]
        self.memo = [[-1 for i in range(self.n+1)] for j in range(2)]
        self.dp = lambda fliped, idx, msk: 0 if msk == (1 << self.n) - 1 else self.memo[fliped][idx][msk]
        self.ans = -1

    def dp(self, fliped, idx, msk):
        if msk == (1 << self.n) - 1:
            return 0
        if self.memo[fliped][idx][msk]!= -1:
            return self.memo[fliped][idx][msk]
        x = int(math.log(msk, 2))
        ff = 0
        ans = 1e9
        for i in range(self.n):
            if (msk & (1 << i)) == 0:
                nf = x % 2
                if idx == self.n or self.a[fliped][idx] <= self.a[(nf + ff) % 2][i]:
                    ans = min(ans, ff + self.dp((nf + ff) % 2, i, msk | 1 << i))
                ff += 1
            else:
                x -= 1
        self.memo[fliped][idx][msk] = ans
        return ans

    def main(self):
        self.ans = self.dp(0, self.n, 0)
        print(self.ans >= 1e8 and -1 or self.ans)

if __name__ == '__main__':
    obj = Main()
    obj.main()