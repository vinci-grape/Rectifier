public class s501065052 {
    public int findLengthOfLCIS(int[] nums) {
        int len = nums.length;
        if (len == 0) return 0;
        int[] mem = new int[len];
        int max = 1;
        int cnt = 1;
        for (int i = 1; i < len; i++) {
            if (nums[i] < nums[i - 1]) {
                cnt++;
            } else {
                max = Math.max(max, cnt);
                cnt = 1;
            }
            mem[i] = cnt;
        }
        max = Math.max(max, cnt);
        cnt = 1;
        for (int i = len - 1; i >= 1; i--) {
            if (nums[i] > nums[i - 1]) {
                cnt++;
            } else {
                max = Math.max(max, cnt);
                cnt = 1;
            }
            mem[i] = cnt;
        }
        return len - max;
    }
}