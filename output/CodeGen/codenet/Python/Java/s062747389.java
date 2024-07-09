public class s062747389 {
    public int maxProfit(int k, int[] prices) {
        int n = prices.length;
        if (k > n / 2) {
            return maxProfit(prices);
        }
        int[] buy = new int[k + 1];
        int[] sell = new int[k + 1];
        buy[0] = 0;
        sell[0] = 0;
        for (int i = 1; i <= k; i++) {
            buy[i] = Math.max(buy[i - 1], sell[i - 1] - prices[i - 1]);
            sell[i] = Math.max(sell[i - 1], buy[i - 1] + prices[i - 1]);
        }
        return sell[k];
    }
    
    public int maxProfit(int[] prices) {
        int n = prices.length;
        if (n < 2) {
            return 0;
        }
        int[] buy = new int[n];
        int[] sell = new int[n];
        buy[0] = 0;
        sell[0] = 0;
        for (int i = 1; i < n; i++) {
            buy[i] = Math.max(buy[i - 1], sell[i - 1] - prices[i - 1]);
            sell[i] = Math.max(sell[i - 1], buy[i - 1] + prices[i - 1]);
        }
        return sell[n - 1];
    }
}