public class s840967243 {
    public int combinationSum4(int[] candidates, int target) {
        int[] dp = new int[target + 1];
        Arrays.sort(candidates);
        dp[0] = 1;
        for (int i = 1; i <= target; i++) {
            for (int j = 0; j < candidates.length; j++) {
                if (i - candidates[j] >= 0) {
                    dp[i] += dp[i - candidates[j]];
                }
            }
        }
        return dp[target];
    }
}