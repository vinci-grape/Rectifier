public class codeforces_333_B {
    public int totalNQueens(int n) {
        int[] b = new int[n * 2];
        b[0] = b[n - 1] = b[n] = b[2 * n - 1] = 0;
        for (int i = 0; i < n; i++) {
            b[i] = 1;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isValid(b, i, j, n)) {
                    b[i + j] = 0;
                }
            }
        }
        return b[0];
    }
    private boolean isValid(int[] b, int i, int j, int n) {
        for (int k = 0; k < n; k++) {
            if (i == k || j == k || i + j == k || i - j == k || -i + j == k || -i - j == k) {
                return false;
            }
        }
        return true;
    }
}