public class s534639230 {
    public int findMaxForm(String[] strs, int m, int n) {
        int[][] dp = new int[m+1][n+1];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) {
                    dp[i][j] = 1;
                } else if (i == 0) {
                    dp[i][j] = dp[i][j-1];
                } else if (j == 0) {
                    dp[i][j] = dp[i-1][j];
                } else {
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                    dp[i][j] %= 998244353;
                }
            }
        }
        int res = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) {
                    res = dp[i][j];
                } else if (i == 0) {
                    res = dp[i][j] - dp[i][j-1];
                } else if (j == 0) {
                    res = dp[i][j] - dp[i-1][j];
                } else {
                    res = dp[i][j] - dp[i-1][j] - dp[i][j-1] + dp[i-1][j-1];
                    res %= 998244353;
                }
            }
        }
        return res;
    }
}

'''