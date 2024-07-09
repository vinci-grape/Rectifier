#--- pB ---#
import sys

class Solution:
    def __init__(self):
        self.scanner = sys.stdin
        self.caseNum = 0

    def run_case(self):
        # self.scanner.readline()
        line = self.scanner.readline()
        N = int(line.split(" ")[0])
        K = int(line.split(" ")[1])

        len = 0
        while N > 0:
            N /= K
            len += 1

        print(len)
        return

    def __init__(self):
        self.scanner = sys.stdin
        self.caseNum = 0

    def run_case(self):
        # self.scanner.readline()
        line = self.scanner.readline()
        N = int(line.split(" ")[0])
        K = int(line.split(" ")[1])

        len = 0
        while N > 0:
            N /= K
            len += 1

        print(len)
        return

if __name__ == "__main__":
    solution = Solution()
    solution.run_case()

class LCS:
    def __init__(self):
        self.dp = None

    def lcs(self, A, B):
        sz_a = len(A)
        sz_b = len(B)
        self.dp = [[0 for j in range(sz_b+1)] for i in range(sz_a+1)]

        for i in range(sz_a+1): self.dp[i][0] = 0
        for j in range(sz_b+1): self.dp[0][j] = 0

        for i in range(1, sz_a+1):
            for j in range(1, sz_b+1):
                if A[i-1] == B[j-1]:
                    self.dp[i][j] = self.dp[i-1][j-1] + 1
                else:
                    self.dp[i][j] = max(self.dp[i-1][j], self.dp[i][j-1])

        return self.dp[sz_a][sz_b]

    def getLCS(self, X, Y):
        m = len(X)
        n = len(Y)
        # Following code is used to print LCS
        index = self.dp[m][n]
        temp = index

        # Create a character array to store the lcs string
        lcs = ['\0'] * (index+1)

        # Start from the right-most-bottom-most corner and
        # one by one store characters in lcs[]
        i = m
        j = n
        while i > 0 and j > 0:
            # If current character in X[] and Y are same, then
            # current character is part of LCS
            if X[i-1] == Y[j-1]:
                # Put current character in result
                lcs[index-1] = X[i-1]

                # reduce values of i, j and index
                i -= 1
                j -= 1
                index -= 1
            # If not same, then find the larger of two and
            # go in the direction of larger value
            else:
                if self.dp[i-1][j] > self.dp[i][j-1]:
                    i -= 1
                else:
                    j -= 1

        # Print the lcs
        # print("LCS of "+X+" and "+Y+" is ")
        # for k in range(temp):
        #     print(lcs[k], end="")
        # print()

        return ''.join(lcs).strip('\0')

if __name__ == "__main__":
    solution = Solution()
    solution.run_case()