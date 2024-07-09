import java.util.*;

public class atcoder_AGC013_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] A = scanner.nextIntArray();
        int K = scanner.nextInt();
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
        System.out.println(ans);
    }
}