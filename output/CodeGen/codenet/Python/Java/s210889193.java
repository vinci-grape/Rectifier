public class s210889193 {
    public int maxScore(int[] action) {
        int[][] dp = new int[action.length][3];
        for (int i = 0; i < action.length; i++) {
            dp[i][0] = action[i];
        }
        for (int i = 1; i < action.length; i++) {
            dp[i][0] = Math.max(dp[i-1][1] + action[i], dp[i-1][2] + action[i]);
            dp[i][1] = Math.max(dp[i-1][0] + action[i], dp[i-1][2] + action[i]);
            dp[i][2] = Math.max(dp[i-1][0] + action[i], dp[i-1][1] + action[i]);
        }
        return Math.max(dp[action.length - 1]);
    }
}