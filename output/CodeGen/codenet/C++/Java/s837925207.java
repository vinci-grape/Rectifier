public class s837925207 {
    public int maxProfit(int k, int[] prices) {
        int n = prices.length;
        if (n < 2) return 0;
        int[] h = new int[n];
        int[] w = new int[n];
        for (int i = 0; i < n; i++) {
            h[i] = prices[i];
            w[i] = 0;
        }
        for (int i = 1; i < n; i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (prices[i] > prices[j]) {
                    w[i] = Math.max(w[i], w[j] + prices[i] - prices[j]);
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = Math.max(ans, w[i]);
        }
        return ans;
    }
}