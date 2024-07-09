public class s343804973 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int m = in.nextInt();
		int mod = in.nextInt();
		int[][] C = new int[n + 1][n + 1];
		for (int i = 0; i <= n; i++) {
			C[i][0] = 1;
			for (int j = 1; j <= i; j++) {
				C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % mod;
			}
		}
		int[][] f = new int[n + 1][m + 1];
		int[][] pre = new int[n + 1][m + 1];
		f[1][0] = 1;
		pre[1][0] = m;
		for (int i = 2; i <= n + 1; i++) {
			for (int j = 0; j <= m; j++) {
				for (int k = 1; k < i; k++) {
					f[i][j] += f[i - k][j] * pre[k][j + 1] % mod * C[i - 2][k - 1] % mod;
					f[i][j] %= mod;
				}
				pre[i][j] = (pre[i][j + 1] + f[i][j]) % mod;
			}
		}
		System.out.println(f[n + 1][0]);
	}
}