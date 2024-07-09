public class codeforces_678_A {
    public int divide(int dividend, int divisor) {
        if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }
        int sign = (dividend < 0) ^ (divisor < 0)? -1 : 1;
        long a = Math.abs((long) dividend);
        long b = Math.abs((long) divisor);
        long res = 0;
        while (a >= b) {
            long t = b;
            b = a % b;
            a = t;
            res += 1;
        }
        return (int) (sign * res);
    }
}