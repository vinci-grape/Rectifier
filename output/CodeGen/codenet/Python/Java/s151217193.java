public class s151217193 {
    public int divide(int dividend, int divisor) {
        if (divisor == 0) {
            return Integer.MAX_VALUE;
        }
        long a = Math.abs((long) dividend);
        long b = Math.abs((long) divisor);
        long res = 0;
        while (a >= b) {
            long tmp = b;
            b = a % b;
            a = tmp;
            res++;
        }
        if (dividend > 0 && divisor > 0 || dividend < 0 && divisor < 0) {
            return (int) res;
        } else {
            return -(int) res;
        }
    }
}