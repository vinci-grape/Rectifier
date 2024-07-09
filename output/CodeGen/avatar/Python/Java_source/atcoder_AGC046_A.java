public class atcoder_AGC046_A {
    public int divide(int dividend, int divisor) {
        if (divisor == 0) {
            return Integer.MAX_VALUE;
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
        return (int) res;
    }
}