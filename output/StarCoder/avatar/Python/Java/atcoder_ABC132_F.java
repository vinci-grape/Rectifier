import java.util.*;
public class atcoder_ABC132_F {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] coef = new int[n];
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            coef[i - 1] = (n / i) - (n / (i + 1));
            sum += coef[i - 1];
        }
        int[] dp = new int[k + 1][n];
        for (int i = 0; i < n; i++) {
            dp[0][i] = 1;
        }
        for (int i = 1; i <= k; i++) {
            for (int j = 0; j < n; j++) {
                int tmp = 0;
                for (int l = j; l < n; l++) {
                    tmp += dp[i - 1][l];
                    tmp %= 1000000007;
                }
                dp[i][j] = coef[j] * tmp;
                dp[i][j] %= 1000000007;
            }
        }
        long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += dp[k][i];
            ans %= 1000000007;
        }
        System.out.println(ans);
    }
}