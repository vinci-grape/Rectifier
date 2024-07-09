public class s050708710 {
    public int totalNQueens(int n) {
        int[] cols = new int[n];
        int[] rows = new int[n];
        int[] diags = new int[2 * n - 1];
        int[] antiDiags = new int[2 * n - 1];
        return totalNQueens(n, cols, rows, diags, antiDiags);
    }
    
    public int totalNQueens(int n, int[] cols, int[] rows, int[] diags, int[] antiDiags) {
        if (n == 0) return 0;
        int total = 0;
        for (int i = 0; i < n; i++) {
            cols[i] = rows[i] = diags[i] = antiDiags[i] = -1;
        }
        for (int i = 0; i < n; i++) {
            if (isValid(i, cols, rows, diags, antiDiags)) {
                cols[i] = rows[i] = diags[i] = antiDiags[i] = i;
                total++;
            }
        }
        return total;
    }
    
    public boolean isValid(int i, int[] cols, int[] rows, int[] diags, int[] antiDiags) {
        for (int j = 0; j < i; j++) {
            if (cols[i] == cols[j] || rows[i] == rows[j] || diags[i] == diags[j] || antiDiags[i] == antiDiags[j]) {
                return false;
            }
        }
        return true;
    }
}