public class codeforces_25_A {
    public int findPeakElement(int[] nums) {
        int len = nums.length;
        if (len == 0) return -1;
        int mid = len / 2;
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) return mid;
        if (nums[mid] > nums[mid - 1] && nums[mid] < nums[mid + 1]) return mid;
        if (nums[mid] < nums[mid - 1] && nums[mid] > nums[mid + 1]) return mid - 1;
        if (nums[mid] < nums[mid - 1] && nums[mid] < nums[mid + 1]) return mid - 1;
        return -1;
    }
}