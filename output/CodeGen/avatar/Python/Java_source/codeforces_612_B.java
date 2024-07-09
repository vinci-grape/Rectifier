public class codeforces_612_B {
    public int findLengthOfLCIS(int[] nums) {
        int n = nums.length;
        int[] b = new int[n];
        b[0] = 1;
        for (int i = 1; i < n; i++) {
            b[i] = 1;
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    b[i] = Math.max(b[i], b[j] + 1);
                }
            }
        }
        int res = 0;
        for (int i = 1; i < n; i++) {
            res += Math.abs(b[i] - b[i - 1]);
        }
        return res;
    }
}