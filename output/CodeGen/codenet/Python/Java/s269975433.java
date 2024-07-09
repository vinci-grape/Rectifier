public class s269975433 {
    public int maxScoreSudoku(int[][] board) {
        int[][] dp = new int[9][9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                dp[i][j] = -1;
            }
        }
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j]!= 0) {
                    dp[i][j] = board[i][j];
                }
            }
        }
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                for (int k = 0; k < 9; k++) {
                    if (dp[i][j] == -1) {
                        continue;
                    }
                    for (int l = 0; l < 9; l++) {
                        if (dp[k][l] == -1) {
                            continue;
                        }
                        if (dp[i][j] == dp[k][l]) {
                            dp[i][j] = -1;
                            break;
                        }
                    }
                }
            }
        }
        int max = 0;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (dp[i][j]!= -1) {
                    max = Math.max(max, dp[i][j]);
                }
            }
        }
        return max;
    }
}