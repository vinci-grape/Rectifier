public class codeforces_340_A {
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
        long a = Math.abs((long) dividend);
        long b = Math.abs((long) divisor);
        long lcm = G(a, b);
        long result = L(a, b) / lcm;
        if (isNegative) {
            return (int) -result;
        } else {
            return (int) result;
        }
    }
    private long G(long a, long b) {
        while (a % b!= 0) {
            a = b;
            b = a % b;
        }
        return b;
    }
    private long L(long a, long b) {
        return a * b / G(a, b);
    }
}