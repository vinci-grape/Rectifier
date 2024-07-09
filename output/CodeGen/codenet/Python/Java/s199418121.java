public class s199418121 {
    public int divide(int dividend, int divisor) {
        if (divisor == 0) {
            return Integer.MAX_VALUE;
        }
        if (dividend == 0) {
            return 0;
        }
        if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }
        boolean isNegative = false;
        if (dividend < 0 && divisor > 0 || dividend > 0 && divisor < 0) {
            isNegative = true;
        }
        long a = Math.abs((long) dividend);
        long b = Math.abs((long) divisor);
        long result = 0;
        while (a >= b) {
            long temp = b;
            b = a % b;
            a = temp;
            result++;
        }
        if (isNegative) {
            result = -result;
        }
        return (int) result;
    }
}