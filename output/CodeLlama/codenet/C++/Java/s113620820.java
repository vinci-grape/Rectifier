/*
 * 2415.java: Sashimi
 */

import java.util.*;

/* constant */

const int MAX_N = 4000;

typedef long long ll;

const ll LINF = 1LL << 60;

/* typedef */

/* global variables */

ll wis[MAX_N], wsums[MAX_N + 1], dp[MAX_N][MAX_N + 1];
int ks[MAX_N][MAX_N + 1];

/* subroutines */

/* main */

public class s113620820 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int n = scanner.nextInt();

    wsums[0] = 0;
    for (int i = 0; i < n; i++) {
      wis[i] = scanner.nextLong();
      wsums[i + 1] = wsums[i] + wis[i];
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= n; j++) dp[i][j] = LINF, ks[i][j] = -1;
      dp[i][i + 1] = 0;
      ks[i][i + 1] = i;
    }

    for (int l = 2; l <= n; l++)
      for (int i = 0, j = l; j <= n; i++, j++) {
	ll mind = LINF;
	ll wsum = wsums[j] - wsums[i];
	int mink = -1;
	for (int k = ks[i][j - 1]; k <= ks[i + 1][j]; k++) {
	  ll d = dp[i][k] + dp[k][j] + wsum;
	  if (mind > d) mind = d, mink = k;
	}
	dp[i][j] = mind;
	ks[i][j] = mink;
      }

    System.out.println(dp[0][n]);
  }
}