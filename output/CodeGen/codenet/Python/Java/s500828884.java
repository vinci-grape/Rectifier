public class s500828884 {
    public int minSubArrayLen(int s, int[] nums) {
        int[] dp = new int[nums.length];
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < nums.length; i++) {
            dp[i] = 1;
            for (int j = i - 1; j >= 0; j--) {
                if (nums[j] < nums[i]) {
                    dp[i] = Math.max(dp[i], dp[j] + 1);
                }
            }
            min = Math.min(min, dp[i]);
        }
        return min == Integer.MAX_VALUE? 0 : min;
    }
}