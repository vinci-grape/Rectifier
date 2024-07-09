public class s225521100 {
    public int findNumberOfLIS(int[] A) {
        int n = A.length;
        int[] dp = new int[n];
        int[] lis = new int[n];
        int max = 0;
        for (int i = 0; i < n; i++) {
            dp[i] = 1;
            lis[i] = 1;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (A[i] > A[j]) {
                    dp[i] = Math.max(dp[i], dp[j] + 1);
                    lis[i] = Math.max(lis[i], lis[j] + 1);
                }
            }
            max = Math.max(max, dp[i]);
        }
        return max;
    }
}