class Pair:
    def __init__(self, l, r):
        self.l = l
        self.r = r

    def __str__(self):
        return str(self.l) + " " + str(self.r)


def dp(fliped, idx, msk):
    if msk == (1 << n) - 1:
        return 0
    if memo[fliped][idx][msk] != -1:
        return memo[fliped][idx][msk]
    x = bin(msk).count('1')
    ff = 0
    ans = int(1e9)
    for i in range(n):
        if (msk & (1 << i)) == 0:
            nf = x % 2
            if idx == n or a[fliped][idx] <= a[(nf + (ff % 2)) % 2][i]:
                ans = min(ans, ff + dp((nf + (ff % 2)) % 2, i, msk | (1 << i)))
            ff += 1
        else:
            x -= 1
    memo[fliped][idx][msk] = ans
    return ans


n = int(input())
a = []
for _ in range(2):
    a.append(list(map(int, input().split())))

memo = [[[-1 for _ in range(1 << n)] for _ in range(n + 1)] for _ in range(2)]

ans = dp(0, n, 0)
print(ans if ans < int(1e8) else -1)