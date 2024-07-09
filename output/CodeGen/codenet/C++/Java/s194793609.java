public class s194793609 {
    public int findMin(int[] nums) {
        int n = nums.length;
        int min = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] < min) {
                min = nums[i];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += nums[i];
            if (min > nums[i]) {
                min = nums[i];
            }
        }
        int num_negative = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                num_negative++;
            }
        }
        if (num_negative % 2) {
            ans -= min * 2;
        }
        return ans;
    }
}