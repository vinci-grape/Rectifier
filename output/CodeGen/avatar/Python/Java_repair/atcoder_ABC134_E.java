import java.util.*;

public class atcoder_ABC134_E {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] A = new int[100];
        int target = scanner.nextInt();
        A[0] = target;
        A[1] = target;
        System.out.println(searchRange(A, target));
    }
    public static int[] searchRange(int[] A, int target) {
        int[] ans = new int[2];
        int low = 0, high = A.length - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (A[mid] < target) {
                low = mid + 1;
            } else if (A[mid] > target) {
                high = mid - 1;
            } else {
                ans[0] = mid;
                ans[1] = mid;
                break;
            }
        }
        return ans;
    }
}