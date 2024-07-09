import java.util.*;

public class codeforces_581_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        int[] ans = maxSlidingWindow(arr, n);
        for (int i = 0; i < n; i++) {
            System.out.print(ans[i] + " ");
        }
    }
    public static int[] maxSlidingWindow(int[] nums, int n) {
        int[] ans = new int[n];
        int mx = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            ans[i] = Math.max(0, mx - nums[i] + 1);
            if (nums[i] > mx) {
                mx = nums[i];
            }
        }
        return ans;
    }
}