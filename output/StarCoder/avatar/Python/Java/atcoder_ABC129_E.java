import java.util.*;
public class atcoder_ABC129_E {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int n = s.length();
        int[][] dp = new int[n + 1][2];
        dp[0][0] = 1;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == '0') {
                dp[i + 1][0] += dp[i][0];
                dp[i + 1][1] += dp[i][1] * 3;
            } else {
                dp[i + 1][0] += dp[i][0] * 2;
                dp[i + 1][1] += dp[i][0];
                dp[i + 1][1] += dp[i][1] * 3;
            }
            dp[i + 1][0] %= 1000000007;
            dp[i + 1][1] %= 1000000007;
        }
        System.out.println((dp[n][0] + dp[n][1]) % 1000000007);
    }
}