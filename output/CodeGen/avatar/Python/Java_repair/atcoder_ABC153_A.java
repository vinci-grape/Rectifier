// Java code is much more verbose.
class Solution {
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
        long res = 0;
        while (a >= b) {
            long tmp = b;
            b = a % b;
            a = tmp;
            res++;
        }
        if (b!= 0) {
            res++;
        }
        if (isNegative) {
            res = -res;
        }
        return (int) res;
    }
}