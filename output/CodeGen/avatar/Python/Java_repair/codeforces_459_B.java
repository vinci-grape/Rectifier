import java.util.*;

public class codeforces_459_B {
    public int divide(int dividend, int divisor) {
        if (dividend == 0) {
            return 0;
        }
        if (divisor == 0) {
            return Integer.MAX_VALUE;
        }
        if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }
        boolean isNegative = (dividend < 0) ^ (divisor < 0);
        long a = Math.abs((long) dividend);
        long b = Math.abs((long) divisor);
        long result = 0;
        while (a >= b) {
            long temp = b;
            b = a % b;
            a = temp;
            result += 1;
        }
        if (isNegative) {
            result = -result;
        }
        return (int) result;
    }
}