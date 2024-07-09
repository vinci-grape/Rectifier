public class atcoder_ABC155_D {
    public int findKthLargest(int[] nums, int k) {
        int N = nums.length;
        if (N == 0) return 0;
        if (N == 1) return nums[0];
        if (k == 1) return nums[0];
        if (k == N) return nums[N - 1];
        int l = 0, r = N - 1;
        while (l < r) {
            int m = l + (r - l) / 2;
            if (nums[m] < nums[r]) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        if (nums[l] < nums[r]) {
            l++;
        }
        if (k < l) return findKthLargest(nums, k);
        if (k > r) return findKthLargest(nums, k - (r - l + 1));
        int lt = l, rt = r;
        while (lt < rt) {
            int m = lt + (rt - lt) / 2;
            if (nums[m] < nums[rt]) {
                lt = m + 1;
            } else {
                rt = m;
            }
        }
        if (nums[lt] < nums[rt]) {
            lt++;
        }
        if (k == lt) return nums[lt];
        if (k == rt) return nums[rt];
        int lt2 = lt, rt2 = rt;
        while (lt2 < rt2) {
            int m = lt2 + (rt2 - lt2) / 2;
            if (nums[m] < nums[rt2]) {
                lt2 = m + 1;
            } else {
                rt2 = m;
            }
        }
        if (nums[lt2] < nums[rt2]) {
            lt2++;
        }
        if (k == lt2) return nums[lt2];
        if (k == rt2) return nums[rt2];
        return nums[k];
    }
}