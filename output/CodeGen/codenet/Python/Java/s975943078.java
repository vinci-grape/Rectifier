public class s975943078 {
    public int findNumberOfLIS(int[] nums) {
        int[] sum = new int[nums.length + 1];
        int[] count = new int[nums.length + 1];
        int max = 0;
        for (int i = 0; i < nums.length; i++) {
            sum[i + 1] = sum[i] + nums[i];
            count[i + 1] = count[i];
            if (sum[i + 1] > max) max = sum[i + 1];
            if (sum[i + 1] == max) count[i + 1]++;
        }
        int res = 0;
        for (int i = max; i >= 0; i--) {
            if (count[i] > 0) res += count[i];
        }
        return res;
    }
}