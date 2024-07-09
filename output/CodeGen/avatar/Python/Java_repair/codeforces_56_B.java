import java.util.*;

public class codeforces_56_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] nums = scanner.nextLine().split(" ");
        int[] result = nextGreaterElement(nums);
        System.out.println(result[0] + " " + result[1]);
    }
    public static int[] nextGreaterElement(int[] nums) {
        int[] result = new int[2];
        int mn = nums.length + 1;
        int mx = -1;
        for (int i = 0; i < nums.length; i++) {
            if (i + 1!= nums[i]) {
                mn = Math.min(mn, i);
                mx = Math.max(mx, i);
            }
        }
        if (mx == -1) {
            result[0] = 0;
            result[1] = 0;
        } else {
            int[] res = new int[nums.length];
            int j = mn;
            for (int i = 0; i < nums.length; i++) {
                if (i + 1!= nums[i]) {
                    res[j++] = nums[i];
                }
            }
            for (int i = mn; i <= mx; i++) {
                res[i] = nums[i];
            }
            if (Arrays.equals(res, nums)) {
                result[0] = mn;
                result[1] = mx;
            } else {
                result[0] = 0;
                result[1] = 0;
            }
        }
        return result;
    }
}