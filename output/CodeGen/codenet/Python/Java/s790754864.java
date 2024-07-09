public class s790754864 {
    public int findKthNumber(int N, int K) {
        int R = N - K;
        int mod = 1000000007;
        int ans = 0;
        for (int i = 1; i <= K; i++) {
            if (N - K + 1 < i) {
                ans = 0;
            } else {
                ans = (int) (Math.factorial(R + 1) / (Math.factorial(R) * Math.factorial(K - 1) * Math.factorial(i - 1)));
            }
            ans = (ans * 10) % mod;
        }
        return ans;
    }
}