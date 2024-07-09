public class s906994739 {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int[][] F = new int[n][10];
        int[][] P = new int[n][10];
        for (int i = 0; i < n; i++) {
            F[i] = new int[10];
            P[i] = new int[10];
            for (int j = 0; j < 10; j++) {
                F[i][j] = prices[i] > j? prices[i] - j : 0;
                P[i][j] = 0;
            }
        }
        int ans = -100000000;
        for (int i = 1; i < (1 << 10); i++) {
            int tmp = 0;
            int[] lst = new int[n];
            for (int j = 0; j < 10; j++) {
                if ((i >> j) & 1) {
                    for (int k = 0; k < n; k++) {
                        lst[k] += F[k][j];
                    }
                }
            }
            for (int k = 0; k < n; k++) {
                tmp += P[k][lst[k]];
            }
            ans = Math.max(ans, tmp);
        }
        return ans;
    }
}