public class codeforces_356_A {
    public int[] nextGreaterElements(int[] nums) {
        int[] res = new int[nums.length];
        int[] comp = new int[nums.length];
        int[] out = new int[nums.length];
        int n = nums.length;
        int m = nums.length;
        comp[0] = 2;
        for (int i = 1; i < n; i++) {
            comp[i] = comp[i - 1] + 1;
        }
        for (int i = 0; i < m; i++) {
            out[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            int t = comp[i];
            while (t <= i) {
                if (out[t - 1] == 0 && t!= nums[i]) {
                    out[t - 1] = nums[i];
                }
                t = comp[t - 1] + 1;
            }
            res[i] = out[i];
        }
        return res;
    }
}