import java.util.*;

public class codeforces_55_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String line = scanner.nextLine();
        String[] numbers = line.split(" ");
        int[] nums = new int[numbers.length];
        for (int i = 0; i < numbers.length; i++) {
            nums[i] = Integer.parseInt(numbers[i]);
        }
        System.out.println(findMin(nums));
    }
    public static int findMin(int[] nums) {
        if (nums.length == 1) return nums[0];
        int[] ans = new int[1];
        ans[0] = nums[0];
        int i = 1;
        while (i < nums.length) {
            int j = i + 1;
            int k = i + 2;
            while (j < nums.length && nums[j] == -1) j++;
            while (k < nums.length && nums[k] == -1) k++;
            if (j < nums.length && nums[j] < nums[i]) {
                ans[0] = nums[i];
                i = j;
            } else if (k < nums.length && nums[k] < nums[i]) {
                ans[0] = nums[i];
                i = k;
            } else {
                int s = nums[i];
                nums[i] = -1;
                int t = nums[k];
                nums[k] = -1;
                if (operations[i] == '+') {
                    nums[k] = s + t;
                } else if (operations[i] == '*') {
                    nums[k] = s * t;
                }
                if (i == 2 && nums[k] < ans[0]) {
                    ans[0] = nums[k];
                }
                i++;
            }
        }
        return ans[0];
    }
}