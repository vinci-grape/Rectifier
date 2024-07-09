public class s897879131 {
    public int totalNQueens(int n) {
        int[][] board = new int[n][n];
        int[] col = new int[n];
        int[] diag = new int[2 * n - 1];
        int[] antiDiag = new int[2 * n - 1];
        int result = 0;
        for (int i = 0; i < n; i++) {
            col[i] = 0;
            diag[i] = 0;
            antiDiag[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                board[i][j] = 0;
            }
        }
        backtrack(board, col, diag, antiDiag, 0, n);
        return result;
    }
    
    public void backtrack(int[][] board, int[] col, int[] diag, int[] antiDiag, int row, int n) {
        if (row == n) {
            result++;
            return;
        }
        for (int i = 0; i < n; i++) {
            if (isValid(board, col, diag, antiDiag, row, i)) {
                board[row][i] = 1;
                col[row] = i;
                diag[row + i] = 1;
                antiDiag[row - i + n - 1] = 1;
                backtrack(board, col, diag, antiDiag, row + 1, n);
                board[row][i] = 0;
                col[row] = 0;
                diag[row + i] = 0;
                antiDiag[row - i + n - 1] = 0;
            }
        }
    }
    
    public boolean isValid(int[][] board, int[] col, int[] diag, int[] antiDiag, int row, int colIndex) {
        for (int i = 0; i < row; i++) {
            if (board[i][colIndex] == 1 || diag[row + i - 1] == 1 || antiDiag[row - i + n - 1] == 1) {
                return false;
            }
        }
        return true;
    }
}