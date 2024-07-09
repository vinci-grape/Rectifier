public class s526060174 {
    public int findMaxLength(int[] nums) {
        int n = nums.length;
        int[] x = new int[31];
        for (int i = 0; i < n; i++) {
            int k = nums[i];
            x[k]++;
        }
        int ans = 0;
        for (int i = 1; i <= m; i++) {
            if (x[i] == n) {
                ans++;
            }
        }
        return ans;
    }
}