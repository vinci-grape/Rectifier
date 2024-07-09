public class s353603279 {
    public int divide(int dividend, int divisor) {
        if (divisor == 0) {
            return Integer.MAX_VALUE;
        }
        if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }
        boolean isNegative = (dividend < 0) ^ (divisor < 0);
        if (isNegative) {
            dividend = -dividend;
            divisor = -divisor;
        }
        long a = Math.abs((long) dividend);
        long b = Math.abs((long) divisor);
        long result = 0;
        while (a >= b) {
            long tmp = b;
            b = a % b;
            a = tmp;
            result += 1;
        }
        if (isNegative) {
            result = -result;
        }
        return (int) result;
    }
}