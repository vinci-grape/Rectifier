public class s951065247 {
    public int threeSumClosest(int[] nums, int target) {
        int N = nums.length;
        if (N < 3) return 0;
        Arrays.sort(nums);
        int a = 0, b = 0, c = 0, diff = 0;
        int res = 0;
        for (int i = 0; i < N - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1, k = N - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target) {
                    return target;
                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
                if (Math.abs(sum - target) < diff) {
                    diff = Math.abs(sum - target);
                    a = nums[i];
                    b = nums[j];
                    c = nums[k];
                }
            }
        }
        res = Math.abs(a + b + c - target);
        return res == 0? target : res;
    }
}