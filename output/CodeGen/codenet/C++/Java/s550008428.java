public class s550008428 {
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
        if (isNegative) {
            dividend = -dividend;
            divisor = -divisor;
        }
        int res = 0;
        while (dividend >= divisor) {
            int tmp = divisor;
            int count = 0;
            while (dividend >= tmp) {
                dividend -= tmp;
                count++;
                tmp <<= 1;
            }
            res += count;
        }
        return isNegative? -res : res;
    }
}