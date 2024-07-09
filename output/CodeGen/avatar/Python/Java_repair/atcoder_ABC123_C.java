import java.util.*;

public class atcoder_ABC123_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int dividend = scanner.nextInt();
        int divisor = scanner.nextInt();
        boolean isNegative = (dividend < 0) ^ (divisor < 0);
        dividend = Math.abs ( dividend );
        divisor = Math.abs ( divisor );
        int res = 0;
        while (dividend >= divisor) {
            int tmp = divisor;
            int count = 0;
            while (dividend >= tmp) {
                dividend -= tmp;
                count++;
                tmp = tmp << 1;
            }
            res += count;
        }
        System.out.println(isNegative? -res : res);
    }
}