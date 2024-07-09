public class s246280701 {
    public int findMin(int[] nums) {
        int n = nums.length;
        int ans = 10_000_000;
        for (int i = 0; i < n; i++) {
            int tmp = 0;
            for (int j = 0; j < n; j++) {
                tmp += Math.abs(i - nums[j]);
            }
            if (tmp < ans) {
                ans = tmp;
            }
        }
        return ans;
    }
}