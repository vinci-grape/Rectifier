import sys
import heapq

class Solution:
    def solve(self, m, n, manju, boxlen, boxcost):
        dp = [[0 for i in range(n+1)] for j in range(m+1)]
        for i in range(m-1, -1, -1):
            for j in range(n-1, -1, -1):
                if i+boxlen[j] >= m:
                    dp[i][j] = dp[i][j+1]
                else:
                    cnt = 0
                    for k in range(i, i+boxlen[j]):
                        cnt += manju[m-1-k]
                    dp[i][j] = max(dp[i][j], dp[i+boxlen[j]][j+1]+cnt-boxcost[j])
                    dp[i][j] = max(dp[i][j], dp[i][j+1])
        return dp[0][0]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    m = int(input())

    n = int(input())

    manju = []

    for _ in range(m):
        manju_item = int(input())
        manju.append(manju_item)

    boxlen = []

    for _ in range(n):
        boxlen_item = int(input())
        boxlen.append(boxlen_item)

    boxcost = []

    for _ in range(n):
        boxcost_item = int(input())
        boxcost.append(boxcost_item)

    result = Solution().solve(m, n, manju, boxlen, boxcost)

    fptr.write(str(result) + '\n')

    fptr.close()