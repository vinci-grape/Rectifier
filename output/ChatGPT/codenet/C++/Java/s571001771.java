import java.util.Scanner;

public class s571001771 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        long[] key = new long[1005];
        long[] cost = new long[1005];
        long[][] dp = new long[(1 << 12) + 5][1005];
        final long INF = 123456789012;

        for (int i = 0; i < (1 << 12) + 5; i++) {
            for (int j = 0; j < 1005; j++) {
                dp[i][j] = INF;
            }
        }

        dp[0][0] = 0;

        for (int i = 1; i <= m; i++) {
            cost[i] = scanner.nextLong();
            int b = scanner.nextInt();
            for (int j = 0; j < b; j++) {
                int c = scanner.nextInt();
                key[i] += (1 << (c - 1));
            }
        }

        for (int i = 0; i < (1 << n); i++) {
            for (int j = 0; j < m; j++) {
                dp[i][j + 1] = Math.min(dp[i][j], dp[i][j + 1]);
                dp[i | key[j + 1]][j + 1] = Math.min(dp[i | key[j + 1]][j + 1], dp[i][j] + cost[j + 1]);
            }
        }

        if (dp[(1 << n) - 1][m] == INF)
            System.out.println(-1);
        else
            System.out.println(dp[(1 << n) - 1][m]);
    }
}