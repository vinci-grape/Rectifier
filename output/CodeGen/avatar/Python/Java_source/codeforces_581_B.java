public class codeforces_581_B {
    public int[] maxSlidingWindow(int[] nums, int k) {
        int[] ans = new int[nums.length - k + 1];
        int mx = nums[0];
        for (int i = 0; i < nums.length - k + 1; i++) {
            ans[i] = Math.max(0, mx - nums[i]);
            if (nums[i] > mx) {
                mx = nums[i];
            }
        }
        return ans;
    }
}