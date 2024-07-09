Input Format

The first line contains an integer, A, denoting the number of test cases.
The second line contains three space-separated integers, A, B, and C, denoting the respective values of A, B, and C.

Output Format

For each test case, print the value of the minimum number of moves required to make the robot reach the goal.

Sample Input

2
1 2 3
2 3 4
Sample Output

0
1
Explanation

In the first test case, the robot can move to the goal in one move.
In the second test case, the robot needs to move two steps to reach the goal.
"""

import sys

class Solution:
    def minMoves(self, A, B, C):
        if B < C:
            return 0
        elif A * C < B:
            return C
        else:
            return B // A

sol = Solution()
tests = int(sys.stdin.readline())
for i in range(tests):
    A, B, C = map(int, sys.stdin.readline().split())
    print(sol.minMoves(A, B, C))