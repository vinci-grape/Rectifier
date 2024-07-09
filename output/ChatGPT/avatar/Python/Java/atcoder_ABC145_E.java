import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class atcoder_ABC145_E {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int TIME = 0;
        int VAL = 1;
        int N = input.nextInt();
        int T = input.nextInt();
        int[][] time_value = new int[N + 1][2];
        for (int i = 1; i <= N; i++) {
            time_value[i][TIME] = input.nextInt();
            time_value[i][VAL] = input.nextInt();
        }
        Arrays.sort(time_value, Comparator.comparingInt(a -> a[VAL]));
        int[][] dp = new int[N + 1][T];
        for (int t = 0; t < T; t++) {
            dp[0][t] = 0;
        }
        for (int n = 1; n <= N; n++) {
            dp[n][0] = 0;
            for (int t = 1; t < T; t++) {
                if (time_value[n][TIME] > t) {
                    dp[n][t] = dp[n - 1][t];
                } else {
                    dp[n][t] = Math.max(dp[n - 1][t], time_value[n][VAL] + dp[n - 1][t - time_value[n][TIME]]);
                }
            }
        }
        int val_acum = time_value[N][VAL];
        int t = T - 1;
        int max_val = val_acum + dp[N - 1][t];
        for (int n = N - 1; n > 0; n--) {
            val_acum += time_value[n][VAL];
            t -= time_value[n + 1][TIME];
            if (t < 0) {
                break;
            } else {
                max_val = Math.max(max_val, val_acum + dp[n - 1][t]);
            }
        }
        System.out.println(max_val);
    }
}