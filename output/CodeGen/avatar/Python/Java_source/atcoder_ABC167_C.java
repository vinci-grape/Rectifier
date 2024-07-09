public class atcoder_ABC167_C {
    public int minSubArrayLen(int s, int[] nums) {
        int[] c = new int[nums.length];
        int[] pre = new int[nums.length];
        int[] l = new int[nums.length];
        int[] rem = new int[nums.length];
        int ans = 0;
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            c[i] = nums[i];
            pre[i] = i;
        }
        for (int i = 1; i < s + 1; i++) {
            int ca = 0;
            for (int j = 0; j < n; j++) {
                ca += c[j];
            }
            if (ca < s) {
                rem[0] = j;
            } else {
                rem[0] = -1;
            }
            for (int j = 1; j < n; j++) {
                ca = 0;
                for (int k = 0; k < rem[j - 1]; k++) {
                    ca += c[k];
                }
                if (ca < s) {
                    rem[j] = j;
                } else {
                    rem[j] = -1;
                }
            }
            if (rem[n - 1]!= -1) {
                for (int j = rem[n - 1]; j < n; j++) {
                    l[j] = j;
                }
                for (int j = 0; j < n; j++) {
                    if (rem[j]!= -1) {
                        l[rem[j]] = rem[j];
                    }
                }
                for (int j = 0; j < n; j++) {
                    if (l[j]!= j) {
                        l[j] = l[l[j]];
                    }
                }
                for (int j = 0; j < n; j++) {
                    if (l[j]!= j) {
                        rem[j] = l[j];
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            ca = 0;
            for (int j = 0; j < n; j++) {
                ca += c[j];
            }
            if (ans == 0) {
                ans = ca;
            } else {
                ans = Math.min(ans, ca);
            }
        }
        return ans;
    }
}