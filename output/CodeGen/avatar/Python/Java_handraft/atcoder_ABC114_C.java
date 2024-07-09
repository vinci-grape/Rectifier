import java.util.*;

public class atcoder_ABC114_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        System.out.println(numDecodings(s));
    }
    public static int numDecodings(String s) {
        int n = s.length();
        if (n == 0) return 0;
        if (n == 1) return 1;
        int[] dp = new int[n + 1];
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            int num = Integer.parseInt(s.substring(i - 2, i));
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
        return dp[n];
    }
}