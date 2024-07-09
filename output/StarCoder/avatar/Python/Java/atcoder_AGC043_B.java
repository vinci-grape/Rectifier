import java.util.*;
public class atcoder_AGC043_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = in.nextInt() - 1;
        }
        boolean noOne = false;
        if (nums[0]!= 0) {
            for (int i = 0; i < n; i++) {
                nums[i] /= 2;
            }
            noOne = true;
        }
        boolean isOdd = false;
        for (int i = 0; i < n; i++) {
            if (!parity(n - 1, i) && nums[i] % 2 == 1) {
                isOdd ^= true;
            }
        }
        if (!isOdd) {
            System.out.println(0);
        } else {
            System.out.println(1 << noOne);
        }
    }
    public static boolean parity(int n, int i) {
        int count = 0;
        while (n > 0) {
            count += n & 1;
            n >>= 1;
        }
        return count - count(n - i) - count(i) > 0;
    }
    public static int count(int n) {
        int count = 0;
        while (n > 0) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
}