public class codeforces_92_A {
    public int divide(int dividend, int divisor) {
        if (divisor == 0) {
            return Integer.MAX_VALUE;
        }
        if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }
        boolean isPositive = (dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0);
        boolean isNegative = (dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0);
        boolean isMinus = (dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0);
        boolean isZero = (dividend == 0 && divisor > 0) || (dividend < 0 && divisor == 0);
        if (isMinus) {
            dividend = -dividend;
            divisor = -divisor;
        }
        if (isZero) {
            return Integer.MAX_VALUE;
        }
        if (isPositive && isNegative) {
            return 0;
        }
        if (isPositive && isNegative) {
            return Integer.MAX_VALUE;
        }
        if (isPositive && isZero) {
            return Integer.MAX_VALUE;
        }
        if (isNegative && isZero) {
            return Integer.MAX_VALUE;
        }
        int res = 0;
        int n = Math.abs ( dividend );
        int m = Math.abs ( divisor );
        while ( n >= m ) {
            int temp = m;
            m = n % m;
            n = temp;
            res += 1;
        }
        if ( isPositive ) {
            return res;
        } else {
            return -res;
        }
    }
}