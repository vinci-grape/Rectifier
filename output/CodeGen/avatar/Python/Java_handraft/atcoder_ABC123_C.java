public class atcoder_ABC123_C {
    public int divide(int dividend, int divisor) {
        if (dividend == 0) return 0;
        if (divisor == 0) return Integer.MAX_VALUE;
        if (dividend == Integer.MIN_VALUE && divisor == -1) return Integer.MAX_VALUE;
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
        return isNegative? -res : res;
    }
}