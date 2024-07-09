public class s189738089 {
    public int[] findMinHeightTrees(int n, int[] height) {
        int[] dp = new int[n + 1];
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            int min = INF;
            for (int j = 1; j <= i; j++) {
                if (height[j - 1] < min) {
                    min = height[j - 1];
                }
            }
            dp[i] = min;
        }
        return dp;
    }
}