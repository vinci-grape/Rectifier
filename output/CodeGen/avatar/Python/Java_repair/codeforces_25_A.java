import java.util.*;

public class codeforces_25_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] nums = scanner.nextInt().split();
        int len = nums.length;
        if (len == 0) return;
        int mid = len / 2;
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) return mid;
        if (nums[mid] > nums[mid - 1] && nums[mid] < nums[mid + 1]) return mid;
        if (nums[mid] < nums[mid - 1] && nums[mid] > nums[mid + 1]) return mid - 1;
        if (nums[mid] < nums[mid - 1] && nums[mid] < nums[mid + 1]) return mid - 1;
        return -1;
    }
}