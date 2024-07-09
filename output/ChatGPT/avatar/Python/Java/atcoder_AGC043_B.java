import java.util.*;

public class atcoder_AGC043_B {
    public static int twosInFactorial(int n) {
        return n - Integer.bitCount(n);
    }

    public static boolean parityOfNcr(int n, int i) {
        int f = twosInFactorial;
        return f(n) - f(n - i) - f(i) > 0;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        String[] numsStr = scanner.nextLine().trim().split(" ");
        int[] nums = new int[numsStr.length];
        boolean noOne = false;

        for (int i = 0; i < numsStr.length; i++) {
            nums[i] = Integer.parseInt(numsStr[i]) - 1;
        }

        if (!Arrays.asList(nums).contains(1)) {
            for (int i = 0; i < nums.length; i++) {
                nums[i] = nums[i] / 2;
            }
            noOne = true;
        }

        boolean isOdd = false;
        for (int i = 0; i < nums.length; i++) {
            if (!parityOfNcr(n - 1, i) && (nums[i] & 1) != 0) {
                isOdd = !isOdd;
            }
        }

        if (!isOdd) {
            System.out.println(0);
        } else {
            System.out.println(1 << (noOne ? 1 : 0));
        }
    }
}