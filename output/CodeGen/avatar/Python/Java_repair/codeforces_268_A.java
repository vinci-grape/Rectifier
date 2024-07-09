import java.util.*;

public class codeforces_268_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] nums = scanner.nextLine().split(" ");
        System.out.println(findDuplicates(nums));
    }
    public static int findDuplicates(int[] nums) {
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i]!= i + 1) {
                count++;
            }
        }
        return count;
    }
}