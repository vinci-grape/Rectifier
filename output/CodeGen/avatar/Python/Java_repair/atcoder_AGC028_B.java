import java.util.*;

public class atcoder_AGC028_B {
    public int findMaxForm(String[] strs, int m, int n) {
        int MOD = 1000000007;
        int[][] fact = new int[m][n];
        fact[0][0] = 1;
        for (int i = 1; i < m; i++) {
            fact[i][0] = fact[i - 1][0] * i % MOD;
        }
        for (int j = 1; j < n; j++) {
            fact[0][j] = fact[0][j - 1] * j % MOD;
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                fact[i][j] = fact[i - 1][j] * (j + 1) % MOD * fact[i][j - 1] % MOD;
                fact[i][j] %= MOD;
            }
        }
        int[][] inv = new int[m][n];
        for (int i = 0; i < m; i++) {
            inv[i][0] = pow(i + 1, MOD - 2, MOD);
        }
        for (int j = 1; j < n; j++) {
            inv[0][j] = inv[0][j - 1] * j % MOD;
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                inv[i][j] = inv[i - 1][j] * (j + 1) % MOD * inv[i][j - 1] % MOD;
                inv[i][j] %= MOD;
            }
        }
        int[][] temp = new int[m][n];
        for (int i = 0; i < m; i++) {
            temp[i][0] = inv[i][0] + inv[i][n - 1] - 1;
        }
        for (int j = 1; j < n; j++) {
            temp[0][j] =