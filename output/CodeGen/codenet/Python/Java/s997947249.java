public class s997947249 {
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
        boolean isNegative = false;
        if (dividend < 0) {
            dividend = -dividend;
            isNegative = true;
        }
        if (divisor < 0) {
            divisor = -divisor;
            isNegative =!isNegative;
        }
        int res = 0;
        while (dividend >= divisor) {
            int tmp = divisor;
            while (dividend >= tmp) {
                dividend -= tmp;
                res++;
            }
            tmp = divisor << 1;
        }
        if (isNegative) {
            return -res;
        }
        return res;
    }
}