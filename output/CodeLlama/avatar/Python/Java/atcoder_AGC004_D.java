import java.io.*;
import java.util.*;

public class atcoder_AGC004_D {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] str = br.readLine().split(" ");
        int n = Integer.parseInt(str[0]);
        int k = Integer.parseInt(str[1]);
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(str[i + 2]) - 1;
        }
        int[][] links = new int[n][];
        for (int i = 0; i < n; i++) {
            links[i] = new int[n];
            Arrays.fill(links[i], -1);
        }
        for (int i = 0; i < n; i++) {
            links[a[i]][i] = 1;
        }
        int[][] dp = new int[n][2];
        for (int i = 0; i < n; i++) {
            dp[i][0] = 1;
            dp[i][1] = 0;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (links[i][j] == 1) {
                    dp[i][0] = Math.max(dp[i][0], dp[j][0] + 1);
                    dp[i][1] += dp[j][1];
                }
            }
            if (dp[i][0] == k) {
                dp[i][0] = 0;
                dp[i][1]++;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (a[0] != i) {
                ans += dp[i][1];
            }
        }
        if (a[0] != 0) {
            ans++;
        }
        System.out.println(ans);
    }
}