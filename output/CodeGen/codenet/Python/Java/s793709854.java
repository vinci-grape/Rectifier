public class s793709854 {
    public int maxSubArray(int[] A) {
        int n = A.length;
        int[] dp = new int[n+1];
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            dp[i] = A[i];
            max = Math.max(max, dp[i]);
        }
        for (int i = n-1; i >= 0; i--) {
            dp[i] = Math.max(dp[i], dp[i+1]);
            max = Math.max(max, dp[i]);
        }
        int ans = dp[0];
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (dp[i] == dp[i+1]) {
                continue;
            }
            dp[i] -= A[i];
            c = Math.max(c, A[i]);
        }
        return ans + c;
    }
}