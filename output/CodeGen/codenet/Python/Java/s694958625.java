public class s694958625 {
    public int divide(int dividend, int divisor) {
        if (divisor == 0) {
            return Integer.MAX_VALUE;
        }
        if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }
        boolean isNegative = false;
        if (dividend < 0) {
            dividend = -dividend;
            isNegative = true;
        }
        if (divisor < 0) {
            divisor = -divisor;
            isNegative =!isNegative;
        }
        long result = 0;
        while (dividend >= divisor) {
            long temp = divisor;
            divisor <<= 1;
            if ((dividend -= divisor) >= temp) {
                dividend -= temp;
                result |= 1;
            }
        }
        if (isNegative) {
            return (int) -result;
        } else {
            return (int) result;
        }
    }
}