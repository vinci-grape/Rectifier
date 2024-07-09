import sys
input = sys.stdin.readline
MOD = 998244353

class atcoder_AGC046_B:
    def __init__(self):
        self.MOD = MOD
        self.dp = [[0] * 3001 for _ in range(3001)]

    def solve(self, A, B, C, D):
        self.dp[A][B] = 1
        for c in range(A, C + 1):
            for d in range(B, D + 1):
                if c == A and d == B:
                    continue
                ans = 0
                if c > A:
                    part = self.dp[c - 1][d]
                    ans = (part * d) % self.MOD
                if d > B:
                    part = self.dp[c][d - 1]
                    ans = (ans + (part * c) % self.MOD) % self.MOD
                if c > A and d > B:
                    ans = (ans - (self.dp[c - 1][d - 1] * (c - 1) * (d - 1)) % self.MOD) % self.MOD
                self.dp[c][d] = (ans + self.MOD) % self.MOD
        print(self.dp[C][D])

if __name__ == '__main__':
    atcoder_AGC046_B().solve(int(input()), int(input()), int(input()), int(input()))