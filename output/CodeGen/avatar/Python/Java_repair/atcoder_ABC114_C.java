import java.util.*;

public class atcoder_ABC114_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        if (n == 0) return;
        if (n == 1) return;
        int[] dp = new int[n + 1];
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            int num = scanner.nextInt();
            if (num >= 10) {
                dp[i] = dp[i - 2] + dp[i - 1];
            } else if (num >= 2 && num <= 6) {
                dp[i] = dp[i - 1];
            } else if (num == 7) {
                dp[i] = dp[i - 1];
            } else if (num == 8) {
                dp[i] = dp[i - 1];
            } else if (num == 9) {
                dp[i] = dp[i - 1];
            }
        }
        System.out.println(dp[n]);
    }
}