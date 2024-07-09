import java.util.*;

public class atcoder_AGC037_E {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        int n = s.length();
        int[] dp = new int[n + 1];
        for (int i = 0; i < n; i++) {
            dp[i + 1] = i;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (s.charAt(i) == s.charAt(j) && dp[i + 1] < dp[j + 1]) {
                    dp[i + 1] = dp[j + 1];
                }
            }
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (dp[i] == i) {
                res++;
            }
        }
        System.out.println(res);
    }
}