public class s787811177 {
    public int findKthLargest(int[] nums, int k) {
        int[] ls = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            ls[i] = nums[i];
        }
        Arrays.sort(ls);
        return ls[nums.length - k - 1];
    }
}