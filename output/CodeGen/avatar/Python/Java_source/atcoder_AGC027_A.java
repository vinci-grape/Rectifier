public class atcoder_AGC027_A {
    public int findMin(int[] nums) {
        int len = nums.length;
        if (len == 0) return 0;
        int left = 0;
        int right = len - 1;
        int mid = 0;
        while (left < right) {
            mid = (left + right) / 2;
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } else if (nums[mid] < nums[right]) {
                right = mid;
            } else {
                right--;
            }
        }
        return nums[left];
    }
}