class Solution:
    def solve(self, n, k, logsLength):
        min_length = 1
        max_length = int(1e9) + 1000
        while min_length < max_length:
            mid = (min_length + max_length) // 2
            if self.nei(mid, logsLength, k):
                max_length = mid
            else:
                min_length = mid + 1
        return min_length
    
    def nei(self, mid, logsLength, k):
        for log in logsLength:
            k -= (log + mid - 1) // mid - 1
        return k >= 0


n, k = map(int, input().split())
logsLength = list(map(int, input().split()))
sol = Solution()
print(sol.solve(n, k, logsLength))