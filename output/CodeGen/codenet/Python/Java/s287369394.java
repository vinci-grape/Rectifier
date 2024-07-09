public class s287369394 {
    public int minSubArrayLen(int s, int[] nums) {
        int[] A = new int[nums.length];
        int[] B = new int[nums.length];
        int N = nums.length;
        for (int i = 0; i < N; i++) {
            A[i] = nums[i];
            B[i] = nums[i];
        }
        int ans = 0;
        for (int i = 0; i < N; i++) {
            int d = Math.min(A[i], B[i]);
            ans += d;
            A[i] -= d;
            B[i] -= d;
            d = Math.min(A[i + 1], B[i]);
            ans += d;
            A[i + 1] -= d;
            B[i] -= d;
        }
        return ans;
    }
}