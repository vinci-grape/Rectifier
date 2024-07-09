public class codeforces_651_A {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        if (n < 2) return 0;
        int[] left = new int[n];
        int[] right = new int[n];
        int max = 0;
        for (int i = 0; i < n; i++) {
            left[i] = Math.max(0, prices[i] - prices[i + 1]);
            right[i] = Math.max(0, prices[i + 1] - prices[i]);
            max = Math.max(max, left[i] + right[i]);
        }
        return max;
    }
}