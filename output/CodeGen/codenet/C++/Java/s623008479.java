public class s623008479 {
    public int findKthLargest(int[] nums, int k) {
        int n = nums.length;
        if (n == 0) return 0;
        int[] l = new int[n];
        for (int i = 0; i < n; i++) {
            l[i] = nums[i];
        }
        Arrays.sort(l);
        return l[n - k - 1];
    }
}