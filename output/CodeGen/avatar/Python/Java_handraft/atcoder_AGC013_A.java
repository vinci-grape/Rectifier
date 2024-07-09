public class atcoder_AGC013_A {
    public int findMinStep(int[] A, int K) {
        int N = A.length;
        int[] dp = new int[N];
        dp[0] = 0;
        for (int i = 1; i < N; i++) {
            dp[i] = dp[i - 1] + A[i - 1];
        }
        int ans = 0;
        for (int i = 0; i < N; i++) {
            int cur = dp[i] + K;
            int prev = dp[i - 1];
            if (cur < prev) {
                ans = i + 1;
                break;
            }
        }
        return ans;
    }
}