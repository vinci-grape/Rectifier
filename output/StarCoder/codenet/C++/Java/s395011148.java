import java.util.*;
import java.io.*;

public class s395011148 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int[] A = new int[N + 1];
		for (int i = 1; i <= N; i++) A[i] = sc.nextInt();
		int[][] dp = new int[N + 1][20];
		for (int i = 0; i <= N; i++) {
			for (int j = 0; j < 20; j++) {
				dp[i][j] = -(1 << 30);
			}
		}
		dp[0][10] = 0;
		for (int i = 1; i <= N; i++) {
			for (int j = 6; j <= 14; j++) {
				if (dp[i - 1][j]!= (1 << 30)) {
					dp[i][j + 1] = Math.max(dp[i][j + 1], dp[i - 1][j] + A[i]);
					dp[i][j - 1] = Math.max(dp[i][j - 1], dp[i - 1][j]);
				}
			}
		}

		int V = 10 + (N / 2) - (N - (N / 2));
		int T1 = dp[N][V];
		int T2 = dp[N][V];
		System.out.println(Math.max(T1, T2));
	}
}