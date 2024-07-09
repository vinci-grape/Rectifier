public class s922746568 {
    public int totalNQueens(int n) {
        int[] cols = new int[n];
        int[] rows = new int[n];
        int[] diags = new int[2 * n - 1];
        int[] antiDiags = new int[2 * n - 1];
        return totalNQueens(n, cols, rows, diags, antiDiags);
    }

    private int totalNQueens(int n, int[] cols, int[] rows, int[] diags, int[] antiDiags) {
        if (n == 0) {
            return 0;
        }
        if (cols[0]!= 0) {
            return 0;
        }
        int result = 1;
        for (int i = 0; i < n; i++) {
            if (isValid(cols, rows, diags, antiDiags, i)) {
                cols[i] = rows[i] = diags[i] = antiDiags[i] = 0;
                result += totalNQueens(n - 1, cols, rows, diags, antiDiags);
            }
        }
        return result;
    }

    private boolean isValid(int[] cols, int[] rows, int[] diags, int[] antiDiags, int i) {
        for (int j = 0; j < i; j++) {
            if (cols[i] == cols[j] || rows[i] == rows[j] || diags[i] == diags[j] || antiDiags[i] == antiDiags[j]) {
                return false;
            }
        }
        return true;
    }
}