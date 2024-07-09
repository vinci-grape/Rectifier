public class atcoder_ABC166_C {
    public int pathSum(int[] nums) {
        int n = nums.length;
        if (n == 0) return 0;
        int[] p = new int[n + 1];
        int[] h = new int[n + 1];
        for (int i = 0; i < n; i++) {
            p[i] = i;
            h[i] = nums[i];
        }
        p[n] = 0;
        h[n] = 0;
        int c = 0;
        for (int i = 0; i < n; i++) {
            int f = 0;
            for (int j = p[i]; j < n; j++) {
                if (h[j] <= h[i]) {
                    f = 1;
                    break;
                }
            }
            if (f == 0) {
                c++;
            }
            for (int j = p[i]; j < n; j++) {
                p[j] = i;
                h[j] = h[i];
            }
        }
        return c;
    }
}