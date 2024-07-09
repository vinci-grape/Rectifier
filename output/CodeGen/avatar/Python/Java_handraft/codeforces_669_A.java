public class codeforces_669_A {
    public int divide(int dividend, int divisor) {
        if (divisor == 0) {
            return Integer.MAX_VALUE;
        }
        if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }
        boolean isNegative = (dividend < 0) ^ (divisor < 0);
        int result = 0;
        if (dividend < 0) {
            dividend = -dividend;
        }
        if (divisor < 0) {
            divisor = -divisor;
        }
        while (dividend >= divisor) {
            int temp = divisor;
            divisor <<= 1;
            result <<= 1;
            while (dividend >= temp) {
                dividend -= temp;
                result++;
            }
        }
        return isNegative? -result : result;
    }
}