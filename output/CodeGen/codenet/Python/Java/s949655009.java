public class s949655009 {
    public int findTargetSumWays(String[] nums, int S) {
        int[][] dp = new int[nums.length][S+1];
        for (int i = 0; i < nums.length; i++) {
            for (int j = 0; j < S+1; j++) {
                if (j == 0) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = dp[i][j-1];
                    for (int k = 0; k < nums[i].length(); k++) {
                        if (nums[i].charAt(k) == '3') {
                            dp[i][j] += dp[i-1][j-3];
                        } else if (nums[i].charAt(k) == '5') {
                            dp[i][j] += dp[i-1][j-5];
                        } else if (nums[i].charAt(k) == '7') {
                            dp[i][j] += dp[i-1][j-7];
                        }
                    }
                }
            }
        }
        return dp[nums.length-1][S];
    }
}

'''