import java.util.*;

public class codeforces_369_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int l = scanner.nextInt();
        int r = scanner.nextInt();
        int sa = scanner.nextInt();
        int sk = scanner.nextInt();
        int[] ans = getNums(k, sk);
        int[] ans2 = getNums(n - k, sa - sk);
        int[] result = concatenateArrays(ans, ans2);
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i] + " ");
        }
    }

    public static int[] getNums(int num, int t) {
        int[] nums = new int[num];
        for (int i = 0; i < num; i++) {
            if (i < t % num) {
                nums[i] = t / num + 1;
            } else {
                nums[i] = t / num;
            }
        }
        return nums;
    }
    
    public static int[] concatenateArrays(int[] arr1, int[] arr2) {
        int[] result = new int[arr1.length + arr2.length];
        System.arraycopy(arr1, 0, result, 0, arr1.length);
        System.arraycopy(arr2, 0, result, arr1.length, arr2.length);
        return result;
    }
}