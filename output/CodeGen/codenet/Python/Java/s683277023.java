public class s683277023 {
    public int findKthLargest(int[] nums, int k) {
        int[] arr = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            arr[i] = nums[i];
        }
        Arrays.sort(arr);
        return arr[nums.length - k];
    }
}