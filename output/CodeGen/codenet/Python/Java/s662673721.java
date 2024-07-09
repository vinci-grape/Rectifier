public class s662673721 {
    public int findMinStep(int n, int k) {
        int ans = 10_000_000;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i!= 0) {
                continue;
            }
            int j = n / i;
            ans = Math.min(ans, i + j - 2);
        }
        return ans;
    }
}