import java.util.*;
public class atcoder_ABC145_E {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int t = sc.nextInt();
        int[][] arr = new int[n + 1][2];
        for (int i = 1; i <= n; i++) {
            arr[i][0] = sc.nextInt();
            arr[i][1] = sc.nextInt();
        }
        Arrays.sort(arr, (a, b) -> a[1] - b[1]);
        int[][] dp = new int[n + 1][t + 1];
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= t; j++) {
                if (i == 0) {
                    dp[i][j] = 0;
                } else if (j == 0) {
                    dp[i][j] = 0;
                } else if (arr[i][1] > j) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    dp[i][j] = Math.max(dp[i - 1][j], arr[i][1] + dp[i - 1][j - arr[i][0]]);
                }
            }
        }
        int val = arr[n][1];
        int t1 = t - 1;
        int max = val + dp[n - 1][t1];
        for (int i = n - 1; i >= 0; i--) {
            val += arr[i][1];
            t1 -= arr[i + 1][0];
            if (t1 < 0) {
                break;
            } else {
                max = Math.max(max, val + dp[i - 1][t1]);
            }
        }
        System.out.println(max);
    }
}