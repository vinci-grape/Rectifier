public class s778828888 {
    public int findMin(int[] nums) {
        int n = nums.length;
        int l = 0, r = n - 1;
        int min = nums[l];
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] > nums[r]) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return nums[l] < nums[r]? nums[l] : nums[r];
    }
}