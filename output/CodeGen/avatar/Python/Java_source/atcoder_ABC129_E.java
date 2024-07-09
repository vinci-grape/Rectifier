public class atcoder_ABC129_E {
    public int findMaxForm(String[] strs, int m, int n) {
        int[][] dp = new int[m + 1][n + 1];
        dp[0][0] = 1;
        for (int i = 1; i <= m; i++) {
            dp[i][0] = dp[i - 1][0] * 2;
            dp[i][0] %= 1000000007;
        }
        for (int j = 1; j <= n; j++) {
            dp[0][j] = dp[0][j - 1] * 3;
            dp[0][j] %= 1000000007;
        }
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (strs[i - 1].charAt(j - 1) == '0') {
                    dp[i][j] += dp[i - 1][j];
                    dp[i][j] %= 1000000007;
                    dp[i][j] += dp[i - 1][j - 1] * 3;
                    dp[i][j] %= 1000000007;
                } else {
                    dp[i][j] += dp[i - 1][j - 1] * 2;
                    dp[i][j] %= 1000000007;
                    dp[i][j] += dp[i - 1][j];
                    dp[i][j] %= 1000000007;
                    dp[i][j] += dp[i][j - 1] * 3;
                    dp[i][j] %= 1000000007;
                }
            }
        }
        return (dp[m][n] + dp[m][n - 1]) % 1000000007;
    }
}