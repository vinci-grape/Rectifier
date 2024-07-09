public class s150958471 {
    public int minNumberOfBusesToDestination(int[] A, int[] B) {
        int n = A.length;
        int[] dp = new int[n];
        for (int i = 0; i < n; i++) {
            dp[i] = Integer.MAX_VALUE;
        }
        dp[0] = 0;
        for (int i = 1; i < n; i++) {
            dp[i] = Math.min(dp[i - 1], dp[i - 1] + A[i - 1]);
        }
        for (int i = 0; i < n; i++) {
            dp[i] = Math.min(dp[i], dp[i] + B[i]);
        }
        return dp[n - 1];
    }
}