import java.util.*;

public class atcoder_ABC132_F {
    public int findKthNumber(int m, int n, int k) {
        int[] dp = new int[k + 1];
        dp[0] = 1;
        for (int i = 1; i <= k; i++) {
            int tmp = 0;
            for (int j = n - 1; j >= 0; j--) {
                tmp += dp[i - 1] % m;
                tmp %= m;
                dp[i] = (dp[i] + dp[i - 1] % m) % m;
            }
        }
        return dp[k];
    }
}