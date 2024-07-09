class Solution:
    def solve(self):
        N, X, x = map(int, input().split())
        xsum = [0] + x
        ans = X * N + 5 * xsum[-1]
        for i in range(1, N):
            cost = X * i + 5 * (xsum[-1] - xsum[-i - 1])
            for j in range(5, 0, -2):
                if cost > ans:
                    break
                cost += j * (xsum[-i] - xsum[-i - j])
            ans = min(ans, cost)
        print(ans + N * X)


if __name__ == '__main__':
    s = Solution()
    s.solve()