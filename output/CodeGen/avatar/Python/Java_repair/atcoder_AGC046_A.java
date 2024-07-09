import java.util.*;

public class atcoder_AGC046_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int dividend = scanner.nextInt();
        int divisor = scanner.nextInt();
        if (divisor == 0) {
            return;
        }
        if (dividend == 0) {
            return 0;
        }
        int sign = 1;
        if (dividend < 0) {
            dividend = -dividend;
            sign = -1;
        }
        if (divisor < 0) {
            divisor = -divisor;
            sign = -sign;
        }
        long a = Math.abs((long) dividend);
        long b = Math.abs((long) divisor);
        long res = 0;
        while (a >= b) {
            long tmp = b;
            b = a % b;
            a = tmp;
            res += sign;
        }
        if (b > 0) {
            res += sign;
        }
        System.out.println((int) res);
    }
}