import java.util.*;
import java.io.*;

public class s113620820 {
  public static void main(String[] args) {
    Scanner cin = new Scanner(System.in);
    int n = cin.nextInt();

    long[] wis = new long[n];
    long[] wsums = new long[n + 1];
    long[][] dp = new long[n][n + 1];
    int[][] ks = new int[n][n + 1];

    for (int i = 0; i < n; i++) {
      wis[i] = cin.nextLong();
      wsums[i + 1] = wsums[i] + wis[i];
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= n; j++) dp[i][j] = Long.MAX_VALUE, ks[i][j] = -1;
      dp[i][i + 1] = 0;
      ks[i][i + 1] = i;
    }

    for (int l = 2; l <= n; l++)
      for (int i = 0, j = l; j <= n; i++, j++) {
        long mind = Long.MAX_VALUE;
        long wsum = wsums[j] - wsums[i];
        int mink = -1;
        for (int k = ks[i][j - 1]; k <= ks[i + 1][j]; k++) {
          long d = dp[i][k] + dp[k][j] + wsum;
          if (mind > d) mind = d, mink = k;
        }
        dp[i][j] = mind;
        ks[i][j] = mink;
      }

    System.out.println(dp[0][n]);
  }
}