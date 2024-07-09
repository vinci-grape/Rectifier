import java.util.Scanner;

public class s343804973 {
    static long[][] C = new long[310][310];
    static long[][] pre = new long[310][310];
    static long[][] f = new long[310][310];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long m = sc.nextLong();
        long mod = sc.nextLong();
        C[0][0] = 1;
        for (int i = 1; i <= n; i++) {
            C[i][0] = C[i][i] = 1;
            for (int j = 1; j < i; j++) {
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % mod;
            }
        }
        for (int i = 0; i <= m; i++) {
            f[1][i] = 1;
            pre[1][i] = m - i + 1;
        }
        for (int i = 2; i <= n + 1; i++) {
            for (int j = 0; j <= m; j++) {
                for (int k = 1; k < i; k++) {
                    f[i][j] += f[i - k][j] * pre[k][j + 1] % mod * C[i - 2][k - 1] % mod;
                    f[i][j] %= mod;
                }
            }
            for (int j = m; j >= 0; j--) {
                pre[i][j] = (pre[i][j + 1] + f[i][j]) % mod;
            }
        }
        System.out.println(f[n + 1][0]);
    }
}