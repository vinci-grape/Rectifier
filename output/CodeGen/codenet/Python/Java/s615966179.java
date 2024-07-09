public class s615966179 {
    public int divide(int dividend, int divisor) {
        if (divisor == 0) {
            return Integer.MAX_VALUE;
        }
        long a = Math.abs((long) dividend);
        long b = Math.abs((long) divisor);
        long ans = a / b;
        long r = a % b;
        if (r == 0) {
            return (int) ans;
        }
        if (dividend < 0) {
            return (int) -ans;
        }
        return (int) ans;
    }
}