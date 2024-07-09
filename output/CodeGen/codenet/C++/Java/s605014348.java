public class s605014348 {
    public int divide(int dividend, int divisor) {
        if (divisor == 0) {
            return Integer.MAX_VALUE;
        }
        if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }
        boolean isPositive = (dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0);
        boolean isNegative = (dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0);
        if (isPositive && isNegative) {
            return 0;
        }
        if (isPositive) {
            return Integer.MAX_VALUE;
        }
        if (isNegative) {
            return -1;
        }
        if (dividend == 0) {
            return 0;
        }
        if (dividend == Integer.MIN_VALUE) {
            return Integer.MAX_VALUE;
        }
        if (divisor == 1) {
            return dividend;
        }
        int sign = 1;
        if (dividend < 0) {
            sign = -1;
        }
        if (divisor < 0) {
            sign = -sign;
        }
        long a = Math.abs((long) dividend);
        long b = Math.abs((long) divisor);
        int res = 0;
        while (a >= b) {
            int c = 1;
            while (a >= (b << c)) {
                c++;
            }
            a -= b << (c - 1);
            res += c;
        }
        return sign * res;
    }
}