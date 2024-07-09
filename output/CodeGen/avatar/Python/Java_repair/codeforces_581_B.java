import java.util.*;

public class codeforces_581_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] nums = scanner.nextInt().split();
        int k = Integer.parseInt(scanner.next());
        int[] ans = maxSlidingWindow(nums, k);
        System.out.println(ans);
    }
    public static int[] maxSlidingWindow(int[] nums, int k) {
        int[] ans = new int[nums.length - k + 1];
        int mx = nums[0];
        for (int i = 0; i < nums.length - k + 1; i++) {
            ans[i] = Math.max(0, mx - nums[i]);
            if (nums[i] > mx) {
                mx = nums[i];
            }
        }
        return ans;
    }
}