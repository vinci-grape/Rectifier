#--- pB ---#
def main():
    while True:
        try:
            run_case()
        except EOFError:
            break

def run_case():
    line = input()
    N, K = map(int, line.split())

    len = 0
    while N > 0:
        N //= K
        len += 1

    print(len)

if __name__ == "__main__":
    main()

class LCS:
    def lcs(self, A, B):
        sz_a = len(A)
        sz_b = len(B)
        dp = [[0] * (sz_b + 1) for _ in range(sz_a + 1)]

        for i in range(sz_a + 1):
            dp[i][0] = 0
        for j in range(sz_b + 1):
            dp[0][j] = 0

        for i in range(1, sz_a + 1):
            for j in range(1, sz_b + 1):
                if A[i - 1] == B[j - 1]:
                    dp[i][j] = dp[i - 1][j - 1] + 1
                else:
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

        return dp[sz_a][sz_b]

    def getLCS(self, X, Y):
        m = len(X)
        n = len(Y)
        index = self.lcs(X, Y)
        temp = index

        lcs = [''] * (index + 1)
        lcs[index] = '\0'

        i = m
        j = n
        while i > 0 and j > 0:
            if X[i - 1] == Y[j - 1]:
                lcs[index - 1] = X[i - 1]
                i -= 1
                j -= 1
                index -= 1
            elif dp[i - 1][j] > dp[i][j - 1]:
                i -= 1
            else:
                j -= 1

        return ''.join(lcs)[:temp + 2]