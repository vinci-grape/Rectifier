import java.util.*;

public class atcoder_AGC027_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int len = scanner.nextInt();
        if (len == 0) return;
        int left = 0;
        int right = len - 1;
        int mid = 0;
        while (left < right) {
            mid = (left + right) / 2;
            if (len > nums[mid]) {
                left = mid + 1;
            } else if (len < nums[mid]) {
                right = mid;
            } else {
                right--;
            }
        }
        System.out.println(nums[left]);
    }
}