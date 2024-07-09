import java.util.*;
import java.math.*;
import java.io.*;

public class s338629964 {
    static int MOD = 998244353;
    static int MOD2 = 1000000007;
    static int N = 1100000;
    static int[][][] dp = new int[N][N][2][2];
    static int[][] comb = new int[N][N];
    static int[] fact = new int[N];
    static int[] revfact = new int[N];
    static int[] rev = new int[N];

    static void init() {
        fact[0] = 1;
        revfact[0] = 1;
        rev[0] = 0;
        rev[1] = 1;
        for (int i = 1; i < N; i++) {
            fact[i] = (int) ((long) fact[i - 1] * i % MOD);
            if (i > 1)
                rev[i] = (int) ((long) MOD / i * (MOD - rev[MOD % i]) % MOD);
            revfact[i] = (int) ((long) revfact[i - 1] * rev[i] % MOD);
        }
    }

    static int nCk(int n, int k) {
        if (n < k)
            return 0;
        if (comb[n][k]!= 0)
            return comb[n][k];
        int res = (int) ((long) fact[n] * revfact[n - k] % MOD * revfact[k] % MOD);
        return comb[n][k] = res;
    }

    static int mod_pow(int x, int a, int m) {
        if (a == 0)
            return 1;
        int res = mod_pow(x, a / 2, m);
        res = (int) ((long) res * res % m);
        if (a % 2)
            res = (int) ((long) res * x % m);
        return res;
    }

    static int inv(int x, int m) {
        return mod_pow(x, m - 2, m);
    }

    public static void main(String[] args) {
        init();
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        int aall = 0, ball = 0;
        for (int i = 0; i < n; i++) {
            int a = cin.nextInt();
            int b = cin.nextInt();
            aall += a;
            ball += b;
        }
        dp[0][0][0][0] = 1;
        for (int i = 1; i <= n; i++) {
            int id = i % 2;
            for (int asum = aall; asum >= 0; asum--) {
                for (int cnt = 0; cnt <= ball; cnt++) {
                    for (int p = 0; p < 2; p++) {
                        if (asum - a[i - 1] < 0)
                            continue;
                        int pw = 1;
                        for (int use = 0; use < b[i - 1]; use++) {
                            if (cnt - use >= 0) {
                                int tmp = nCk(cnt, use) % MOD * pw % MOD;
                                dp[asum][cnt][p][0] += dp[asum - a[i - 1]][cnt - use][p ^ 1][0] * tmp % MOD;
                                dp[asum][cnt][