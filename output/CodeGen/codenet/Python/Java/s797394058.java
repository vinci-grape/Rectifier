public class s797394058 {
    public int numMagicSquaresInside(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        int[][] dp = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    dp[i][j] = 0;
                } else {
                    dp[i][j] = Integer.MAX_VALUE;
                    for (int k = 0; k < 3; k++) {
                        int x = i + dp[i][j - k];
                        int y = j + dp[i][j + k];
                        int z = dp[i - k][j - k];
                        int w = dp[i - k][j + k];
                        if (x >= 0 && x < m && y >= 0 && y < n && z >= 0 && z < n && w >= 0 && w < n && grid[x][y] == grid[i][j] && grid[x][y] == grid[i][j] && grid[x][y] == grid[i][j]) {
                            dp[i][j] = Math.min(dp[i][j], 1 + Math.min(Math.min(x, y), Math.min(z, w)));
                        }
                    }
                }
            }
        }
        return dp[m - 1][n - 1];
    }
}