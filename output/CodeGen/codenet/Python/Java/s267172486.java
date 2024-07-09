public class s267172486 {
    public int divide(int dividend, int divisor) {
        int ans = 0;
        int ama = dividend % divisor;
        if (ama!= 0) {
            ans = 1;
        }
        return ans;
    }
}