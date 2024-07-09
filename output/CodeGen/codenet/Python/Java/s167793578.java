public class s167793578 {
    public int totalNQueens(int n) {
        int[] a = new int[n];
        int[] b = new int[n];
        int total = 0;
        for (int i = 0; i < n; i++) {
            a[i] = i * (i - 1) / 2;
            b[i] = i * (i - 1) / 2;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i] + b[j] == n * (n - 1) / 2) {
                    total++;
                }
            }
        }
        return total;
    }
}