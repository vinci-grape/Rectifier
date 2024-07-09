public class s316832655 {
    public int divide(int dividend, int divisor) {
        if (divisor == 0) {
            return Integer.MAX_VALUE;
        }
        long a = Math.abs((long) dividend);
        long b = Math.abs((long) divisor);
        long c = a / b;
        long d = a % b;
        if (d > 0) {
            c++;
        }
        return (int) c;
    }
}