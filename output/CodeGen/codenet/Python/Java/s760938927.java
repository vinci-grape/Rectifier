public class s760938927 {
    public int findMaxForm(String[] mat, int R, int C, int K) {
        int[][] dp = new int[R][C];
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (mat[i][j] == '#') {
                    dp[i][j] = 0;
                } else {
                    dp[i][j] = Integer.MAX_VALUE;
                }
            }
        }
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (mat[i][j] == '#') {
                    continue;
                }
                for (int k = 0; k < K; k++) {
                    if (mat[i][j] == '.') {
                        dp[i][j] = Math.min(dp[i][j], dp[i][j - 1] + 1);
                        dp[i][j] = Math.min(dp[i][j], dp[i - 1][j] + 1);
                        dp[i][j] = Math.min(dp[i][j], dp[i - 1][j - 1] + 1);
                    } else {
                        dp[i][j] = Math.min(dp[i][j], dp[i - 1][j] + 1);
                        dp[i][j] = Math.min(dp[i][j], dp[i][j - 1] + 1);
                        dp[i][j] = Math.min(dp[i][j], dp[i - 1][j - 1] + 1);
                    }
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (mat[i][j] == '#') {
                    continue;
                }
                if (dp[i][j] == Integer.MAX_VALUE) {
                    ans = Math.max(ans, dp[i][j]);
                } else {
                    ans = Math.max(ans, dp[i][j]);
                }
            }
        }
        return ans;
    }
}